#pragma once

#include <iostream>
#include <ctime>


using namespace std;


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

	time_t date;
	Type type;
	string brand;
	Color color;
	string unit;
	int size;
	int size2;
	int id;


public:

	Object(time_t date, Type type, string brand, int id, Color color, string unit, int size, int size2) 
	{
		this->date = date; this->type = type; this->brand = brand; this->id = id; this->color = color; this->unit = unit; this->size = size; this->size2 = size2;
	}
	~Object() { ; }

	void SetColor(Color color) { this->color = color; }
	void SetUnit(string unit) { this->unit = unit; }
	void SetSize(int size) { this->size = size; }
	void SetSize2(int size2) { this->size2 = size2; }

	time_t GetDate() { return date; }
	Type GetType() { return type; }
	string GetBrand() { return brand; }
	int GetID() { return id; }
	Color GetColor() { return color; }
	string GetUnit() { return unit; }
	int GetSize() { return size; }
	int GetSize2() { return size2; }
};

