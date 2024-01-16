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

	Botas,
	Buzo,
	Camisa,
	Campera,
	Cascos,
	Chaleco,
	Chaqueta, 
	Delantal, 
	GuardaPolvo,
	Pantalon,
	Remera,
	ZapatosSeguridad,

	//tools

	Alicate,
	AmoladoraGrande,
	AmoladoraChica,
	Antiparra,
	ArcoSierra,
	BuscaPolo,
	CintaMetrica,
	CortaHierro,
	DestornilladorPhillips,
	DestornilladorPlano,
	DiscoCorte,
	DiscoDesbaste,
	DiscoFlap,
	DiscoSensitiva,
	Electrodo,
	ElectrodoInoxidable,
	GuanteCuero,
	GuanteTela,
	JuegoAllen,
	JuegoThorx,
	LLaveCanio,
	LlaveCombinadaMetrica,
	LlaveCombinadaImperial,
	LLaveDeTubo,
	LLaveFijaImperial,
	LLaveFijaMetrica,
	LLaveFrancesa,
	Martillo,
	Masa,
	MascaraSoldar,
	MechaHierro,
	MechaWidia,
	Multimetro,
	Percutor,
	PiedraBanco,
	Pinza,
	PinzaAmperometrica,
	PinzaFuerza,
	Punta,
	Rotopercutor,
	SoldadoraElectrica,
	Sensitiva,
	SoldadorEstanio,
	Taladro,
	TaladroDeMesa,
	Tenaza,
	Tijeras,
	Tubo,
};

enum class Color
{
	Rojo,
	Blanco,
	Negro,
	Azul,
	Amarillo, 
	Naranja,
	Verde,
	Gris
};

class Object
{
private:

	Date date;
	Type type;
	string brand;
	Color color;
	string unit;
	int size;
	int size2;



public:

	Object(Date date, Type type, string brand) { this->date = date; this->type = type; this->brand = brand; }
	~Object() {}

	Date GetDate() { return date; }
	Type GetType() { return type; }
	string GetBrand() { return brand; }

	void SetColor(Color color) { this->color = color; }
	void SetUnit(string unit) { this->unit = unit; }
	void SetSize(int size) { this->size = size; }
	void SetSize2(int size2) { this->size2 = size2; }

	Color GetColor() { return color; }
	string GetUnit() { return unit; }
	int GetSize() { return size; }
	int GetSize2() { return size2; }
};

