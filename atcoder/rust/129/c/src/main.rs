extern crate core;

macro_rules! input {
    (source = $s:expr, $($r:tt)*) => {
        let mut iter = $s.split_whitespace();
        let mut next = || { iter.next().unwrap() };
        input_inner!{next, $($r)*}
    };
    ($($r:tt)*) => {
        let stdin = std::io::stdin();
        let mut bytes = std::io::Read::bytes(std::io::BufReader::new(stdin.lock()));
        let mut next = move || -> String{
            bytes
                .by_ref()
                .map(|r|r.unwrap() as char)
                .skip_while(|c|c.is_whitespace())
                .take_while(|c|!c.is_whitespace())
                .collect()
        };
        input_inner!{next, $($r)*}
    };
}

macro_rules! input_inner {
    ($next:expr) => {};
    ($next:expr, ) => {};

    ($next:expr, $var:ident : $t:tt $($r:tt)*) => {
        let $var = read_value!($next, $t);
        input_inner!{$next $($r)*}
    };
}

macro_rules! read_value {
    ($next:expr, ( $($t:tt),* )) => {
        ( $(read_value!($next, $t)),* )
    };

    ($next:expr, [ $t:tt ; $len:expr ]) => {
        (0..$len).map(|_| read_value!($next, $t)).collect::<Vec<_>>()
    };

    ($next:expr, chars) => {
        read_value!($next, String).chars().collect::<Vec<char>>()
    };

    ($next:expr, usize1) => {
        read_value!($next, usize) - 1
    };

    ($next:expr, $t:ty) => {
        $next().parse::<$t>().expect("Parse error")
    };
}

fn main() {
    input!{
        n: usize,
        m: usize,
        list: [usize; m],
    }
    let mut dp = Vec::new();
    let mut ptr = 0;
    let modi = 1000000007;
    for i in 0..n + 1 {
        match i {
            0 => dp.push(0),
            _ => {
                if let Some(p) = list.get(ptr) {
                    if i == *p {
                        dp.push(0);
                        ptr += 1;
                    } else {
                        if i == 1 {
                            dp.push(1);
                        } else if i == 2 {
                            if dp[i - 1] == 1 {
                                dp.push(2);
                            } else {
                                dp.push(1);
                            }
                        } else {
                            let v1 = dp[i - 1];
                            let v2 = dp[i - 2];
                            dp.push((v1 + v2) % modi);
                        }      
                    }
                } else {
                    if i == 1 {
                        dp.push(1);
                    } else if i == 2 {
                        if dp[i - 1] == 1 {
                            dp.push(2);
                        } else {
                            dp.push(1);
                        }
                    } else {
                        let v1 = dp[i - 1];
                        let v2 = dp[i - 2];
                        dp.push((v1 + v2) % modi);
                    }
                }
            }
        }
    }
    if let Some(n) = dp.get(n) {
        println!("{}", n);
    }
}
