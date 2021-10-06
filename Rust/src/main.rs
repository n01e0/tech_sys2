#[macro_use]
extern crate clap;

use std::fs;

fn main() {
    let yml = load_yaml!("cmd.yml");
    let args = clap::App::from_yaml(yml).get_matches();
    let path = args.value_of("path").unwrap();
    match fs::read_to_string(path)  {
        Ok(c) => print!("{}", c),
        Err(e) => eprintln!("{}", e),
    }
}
