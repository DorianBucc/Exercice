// src : ChatGPT

trait Vitesse {
    fn vmax(&self) -> String;
}

struct Voiture {
    name: String,
    vitesse: String,
}

impl Vitesse for Voiture {
    fn vmax(&self) -> String {
        format!("{}{}", self.name, self.vitesse)
    }
}

struct Moto {
    name: String,
    vitesse: String,
}

impl Vitesse for Moto {
    fn vmax(&self) -> String {
        format!("{}{}", self.name, self.vitesse)
    }
}

struct Camion {
    name: String,
    vitesse: String,
}

impl Vitesse for Camion {
    fn vmax(&self) -> String {
        format!("{}{}", self.name, self.vitesse)
    }
}

pub fn ex3(){
    let taille_tab = 3;
    let mut tab: Vec<Box<dyn Vitesse>> = Vec::new();
    
    tab.push(Box::new(Voiture { name: String::from("C3"), vitesse: String::from(" 130 km/h") }));
    tab.push(Box::new(Moto { name: String::from("R1"), vitesse: String::from(" 200 km/h") }));
    tab.push(Box::new(Camion { name: String::from("Man"), vitesse: String::from(" 80 km/h") }));

    for i in 0..taille_tab {
        println!("{}", tab[i].vmax());
    }
}