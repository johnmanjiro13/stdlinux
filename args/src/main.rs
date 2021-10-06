use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    println!("args={}", args.len());

    for (i, arg) in args.iter().enumerate() {
        println!("args[{}]={}", i, arg);
    }
}
