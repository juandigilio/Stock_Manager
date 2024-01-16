#pragma once

#include <list>

#include "Object.h"


class ProgramLogic
{
private:

	list<Object>stock;

	int totalBotas{};
	int totalBuzo{};
	int totalCamisa{};
	int totalCampera{};
	int totalCascos{};
	int totalChaleco{};
	int totalChaqueta{};
	int totalDelantal{};
	int totalGuardaPolvo{};
	int totalPantalon{};
	int totalRemera{};
	int totalZapatosSeguridad{};

	int totalAlicate{};
	int totalAmoladoraGrande{};
	int totalAmoladoraChica{};
	int totalAntiparra{};
	int totalArcoSierra{};
	int totalBuscaPolo{};
	int totalCintaMetrica{};
	int totalCortaHierro{};
	int totalDestornilladorPhillips{};
	int totalDestornilladorPlano{};
	int totalDiscoCorte{};
	int totalDiscoDesbaste{};
	int totalDiscoFlap{};
	int totalDiscoSensitiva{};
	int totalElectrodo{};
	int totalElectrodoInoxidable{};
	int totalGuanteCuero{};
	int totalGuanteTela{};
	int totalJuegoAllen{};
	int totalJuegoThorx{};
	int totalLLaveCanio{};
	int totalLlaveCombinadaMetrica{};
	int totalLlaveCombinadaImperial{};
	int totalLLaveDeTubo{};
	int totalLLaveFijaImperial{};
	int totalLLaveFijaMetrica{};
	int totalLLaveFrancesa{};
	int totalMartillo{};
	int totalMasa{};
	int totalMascaraSoldar{};
	int totalMechaHierro{};
	int totalMechaWidia{};
	int totalMultimetro{};
	int totalPercutor{};
	int totalPiedraBanco{};
	int totalPinza{};
	int totalPinzaAmperometrica{};
	int totalPinzaFuerza{};
	int totalPunta{};
	int totalRotopercutor{};
	int totalSoldadoraElectrica{};
	int totalSensitiva{};
	int totalSoldadorEstanio{};
	int totalTaladro{};
	int totalTaladroDeMesa{};
	int totalTenaza{};
	int totalTijeras{};
	int totalTubo{};


public:

	ProgramLogic();
	~ProgramLogic();

	int GetTotalBotas() { return totalBotas; }
	int GetTotalBuzo() { return totalBuzo; }
	int GetTotalCamisa() { return totalCamisa; }
	int GetTotalCampera() { return totalCampera; }
	int GetTotalCascos() { return totalCascos; }
	int GetTotalChaleco() { return totalChaleco; }
	int GetTotalChaqueta() { return totalChaqueta; }
	int GetTotalDelantal() { return totalDelantal; }
	int GetTotalGuardaPolvo() { return totalGuardaPolvo; }
	int GetTotalPantalon() { return totalPantalon; }
	int GetTotalRemera() { return totalRemera; }
	int GetTotalZapatosSeguridad() { return totalZapatosSeguridad; }
	int GetTotalAlicate() { return totalAlicate; }
	int GetTotalAmoladoraGrande() { return totalAmoladoraGrande; }
	int GetTotalAmoladoraChica() { return totalAmoladoraChica; }
	int GetTotalAntiparra() { return totalAntiparra; }
	int GetTotalArcoSierra() { return totalArcoSierra; }
	int GetTotalBuscaPolo() { return totalBuscaPolo; }
	int GetTotalCintaMetrica() { return totalCintaMetrica; }
	int GetTotalCortaHierro() { return totalCortaHierro; }
	int GetTotalDestornilladorPhillips() { return totalDestornilladorPhillips; }
	int GetTotalDestornilladorPlano() { return totalDestornilladorPlano; }
	int GetTotalDiscoCorte() { return totalDiscoCorte; }
	int GetTotalDiscoDesbaste() { return totalDiscoDesbaste; }
	int GetTotalDiscoFlap() { return totalDiscoFlap; }
	int GetTotalDiscoSensitiva() { return totalDiscoSensitiva; }
	int GetTotalElectrodo() { return totalElectrodo; }
	int GetTotalElectrodoInoxidable() { return totalElectrodoInoxidable; }
	int GetTotalGuanteCuero() { return totalGuanteCuero; }
	int GetTotalGuanteTela() { return totalGuanteTela; }
	int GetTotalJuegoAllen() { return totalJuegoAllen; }
	int GetTotalJuegoThorx() { return totalJuegoThorx; }
	int GetTotalLLaveCanio() { return totalLLaveCanio; }
	int GetTotalLlaveCombinadaMetrica() { return totalLlaveCombinadaMetrica; }
	int GetTotalLlaveCombinadaImperial() { return totalLlaveCombinadaImperial; }
	int GetTotalLLaveDeTubo() { return totalLLaveDeTubo; }
	int GetTotalLLaveFijaImperial() { return totalLLaveFijaImperial; }
	int GetTotalLLaveFijaMetrica() { return totalLLaveFijaMetrica; }
	int GetTotalLLaveFrancesa() { return totalLLaveFrancesa; }
	int GetTotalMartillo() { return totalMartillo; }
	int GetTotalMasa() { return totalMasa; }
	int GetTotalMascaraSoldar() { return totalMascaraSoldar; }
	int GetTotalMechaHierro() { return totalMechaHierro; }
	int GetTotalMechaWidia() { return totalMechaWidia; }
	int GetTotalMultimetro() { return totalMultimetro; }
	int GetTotalPercutor() { return totalPercutor; }
	int GetTotalPiedraBanco() { return totalPiedraBanco; }
	int GetTotalPinza() { return totalPinza; }
	int GetTotalPinzaAmperometrica() { return totalPinzaAmperometrica; }
	int GetTotalPinzaFuerza() { return totalPinzaFuerza; }
	int GetTotalPunta() { return totalPunta; }
	int GetTotalRotopercutor() { return totalRotopercutor; }
	int GetTotalSoldadoraElectrica() { return totalSoldadoraElectrica; }
	int GetTotalSensitiva() { return totalSensitiva; }
	int GetTotalSoldadorEstanio() { return totalSoldadorEstanio; }
	int GetTotalTaladro() { return totalTaladro; }
	int GetTotalTaladroDeMesa() { return totalTaladroDeMesa; }
	int GetTotalTenaza() { return totalTenaza; }
	int GetTotalTijeras() { return totalTijeras; }
	int GetTotalTubo() { return totalTubo; }

	void AddItem();
	void DeleteItem();
};

