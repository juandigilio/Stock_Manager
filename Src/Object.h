#pragma once

#include <iostream>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

enum class Type
{
	//clothes

	GuardaPolvo,
	Camisa,
	Chaqueta, 
	Pantalon,
	Delantal, 
	Campera,
	Chaleco,
	Buzo,
	Remera,
	ZapatosSeguridad,
	Botas,
	Cascos,

	//tools

	LlaveCombinadaMetrica,
	LlaveCombinadaImperial,
	LLaveFijaMetrica,
	LLaveFijaImperial,
	LLaveCanio,
	LLaveFrancesa,
	Masa,
	Martillo,
	JuegoAllen,
	JuegoThorx,
	DestornilladorPhillips,
	DestornilladorPlano,
	Multimetro,
	PinzaAmperometrica,
	CintaMetrica,
	GuanteTela,
	GuanteCuero,
	SoldadoraElectrica,
	SoldadorEstanio,
	Taladro,
	Percutor,
	Rotopercutor,
	Sensitiva,
	AmoladoraGrande,
	AmoladoraChica,
	ArcoSierra,
	Tenaza,
	Pinza,
	Alicate,
	BuscaPolo,
	Tijeras,
	MascaraSoldar,
	Antiparra,
	PinzaFuerza,
	LLaveDeTubo,
	Tubo,
	CortaHierro,
	Punta,
	MechaHierro,
	MechaWidia,
	Electrodo,
	ElectrodoInoxidable,
	DiscoCorte,
	DiscoDesbaste,
	DiscoSensitiva,
	DiscoFlap,
	TaladroDeMesa,
	PiedraBanco
};

class Object
{
protected:

	Date date;
	Type type;


public:

	Object(Date date, Type type) { this->date = date; this->type = type; }
	~Object() {}

	Date GetDate() { return date; }
	Type GetType() { return type; }
};

