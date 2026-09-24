/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void Update(GameLogic.Player.IPlayer player, GameLogic.Config.Types.MetacoreTime endTimestamp, GameLogic.Random.IGenerationContext generationContext, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 03775b80
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03775d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03777114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x037762d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03776408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03777118) */
/* WARNING: Removing unreachable block (ram,0x03777708) */
/* WARNING: Removing unreachable block (ram,0x03777128) */
/* WARNING: Removing unreachable block (ram,0x03777144) */
/* WARNING: Removing unreachable block (ram,0x0377714c) */
/* WARNING: Removing unreachable block (ram,0x03777174) */
/* WARNING: Removing unreachable block (ram,0x03777158) */
/* WARNING: Removing unreachable block (ram,0x03777164) */
/* WARNING: Removing unreachable block (ram,0x03777184) */
/* WARNING: Removing unreachable block (ram,0x0377719c) */
/* WARNING: Removing unreachable block (ram,0x037771b0) */
/* WARNING: Removing unreachable block (ram,0x037771b4) */
/* WARNING: Removing unreachable block (ram,0x037771e4) */
/* WARNING: Removing unreachable block (ram,0x037771f8) */
/* WARNING: Removing unreachable block (ram,0x037771fc) */
/* WARNING: Removing unreachable block (ram,0x03777224) */
/* WARNING: Removing unreachable block (ram,0x0377722c) */
/* WARNING: Removing unreachable block (ram,0x03777254) */
/* WARNING: Removing unreachable block (ram,0x03777238) */
/* WARNING: Removing unreachable block (ram,0x03777244) */
/* WARNING: Removing unreachable block (ram,0x03777264) */
/* WARNING: Removing unreachable block (ram,0x03777760) */
/* WARNING: Removing unreachable block (ram,0x037772e0) */
/* WARNING: Removing unreachable block (ram,0x03777308) */
/* WARNING: Removing unreachable block (ram,0x03777310) */
/* WARNING: Removing unreachable block (ram,0x03777340) */
/* WARNING: Removing unreachable block (ram,0x0377731c) */
/* WARNING: Removing unreachable block (ram,0x03777328) */
/* WARNING: Removing unreachable block (ram,0x03777350) */
/* WARNING: Removing unreachable block (ram,0x03775d4c) */
/* WARNING: Removing unreachable block (ram,0x03777b30) */
/* WARNING: Removing unreachable block (ram,0x03775d54) */
/* WARNING: Removing unreachable block (ram,0x0377640c) */
/* WARNING: Removing unreachable block (ram,0x037777d0) */
/* WARNING: Removing unreachable block (ram,0x03776458) */
/* WARNING: Removing unreachable block (ram,0x03776480) */
/* WARNING: Removing unreachable block (ram,0x03776488) */
/* WARNING: Removing unreachable block (ram,0x037764f0) */
/* WARNING: Removing unreachable block (ram,0x03776494) */
/* WARNING: Removing unreachable block (ram,0x037764a0) */
/* WARNING: Removing unreachable block (ram,0x03776500) */
/* WARNING: Removing unreachable block (ram,0x03776750) */
/* WARNING: Removing unreachable block (ram,0x03776758) */
/* WARNING: Removing unreachable block (ram,0x037767c8) */
/* WARNING: Removing unreachable block (ram,0x037768b4) */
/* WARNING: Removing unreachable block (ram,0x037777a8) */
/* WARNING: Removing unreachable block (ram,0x037768cc) */
/* WARNING: Removing unreachable block (ram,0x037768e8) */
/* WARNING: Removing unreachable block (ram,0x037768f0) */
/* WARNING: Removing unreachable block (ram,0x03776ba4) */
/* WARNING: Removing unreachable block (ram,0x037768fc) */
/* WARNING: Removing unreachable block (ram,0x03776908) */
/* WARNING: Removing unreachable block (ram,0x03776bb4) */
/* WARNING: Removing unreachable block (ram,0x037776f0) */
/* WARNING: Removing unreachable block (ram,0x03776bc8) */
/* WARNING: Removing unreachable block (ram,0x03776be0) */
/* WARNING: Removing unreachable block (ram,0x03776be8) */
/* WARNING: Removing unreachable block (ram,0x03776d38) */
/* WARNING: Removing unreachable block (ram,0x03776bf4) */
/* WARNING: Removing unreachable block (ram,0x03776c00) */
/* WARNING: Removing unreachable block (ram,0x03776d48) */
/* WARNING: Removing unreachable block (ram,0x03777748) */
/* WARNING: Removing unreachable block (ram,0x03776d5c) */
/* WARNING: Removing unreachable block (ram,0x03776d7c) */
/* WARNING: Removing unreachable block (ram,0x03776d84) */
/* WARNING: Removing unreachable block (ram,0x03776e18) */
/* WARNING: Removing unreachable block (ram,0x03776d90) */
/* WARNING: Removing unreachable block (ram,0x03776d9c) */
/* WARNING: Removing unreachable block (ram,0x03776e28) */
/* WARNING: Removing unreachable block (ram,0x03777750) */
/* WARNING: Removing unreachable block (ram,0x03776e3c) */
/* WARNING: Removing unreachable block (ram,0x03777718) */
/* WARNING: Removing unreachable block (ram,0x03776e48) */
/* WARNING: Removing unreachable block (ram,0x03776e64) */
/* WARNING: Removing unreachable block (ram,0x03776e6c) */
/* WARNING: Removing unreachable block (ram,0x03776f00) */
/* WARNING: Removing unreachable block (ram,0x03776e78) */
/* WARNING: Removing unreachable block (ram,0x03776e84) */
/* WARNING: Removing unreachable block (ram,0x03776f10) */
/* WARNING: Removing unreachable block (ram,0x03777700) */
/* WARNING: Removing unreachable block (ram,0x03776f24) */
/* WARNING: Removing unreachable block (ram,0x03777740) */
/* WARNING: Removing unreachable block (ram,0x03776f38) */
/* WARNING: Removing unreachable block (ram,0x03776f50) */
/* WARNING: Removing unreachable block (ram,0x03776f58) */
/* WARNING: Removing unreachable block (ram,0x03777024) */
/* WARNING: Removing unreachable block (ram,0x03776f64) */
/* WARNING: Removing unreachable block (ram,0x03776f70) */
/* WARNING: Removing unreachable block (ram,0x03777034) */
/* WARNING: Removing unreachable block (ram,0x03777780) */
/* WARNING: Removing unreachable block (ram,0x03777054) */
/* WARNING: Removing unreachable block (ram,0x03777768) */
/* WARNING: Removing unreachable block (ram,0x03777058) */
/* WARNING: Removing unreachable block (ram,0x03777074) */
/* WARNING: Removing unreachable block (ram,0x0377707c) */
/* WARNING: Removing unreachable block (ram,0x037770a4) */
/* WARNING: Removing unreachable block (ram,0x03777088) */
/* WARNING: Removing unreachable block (ram,0x03777094) */
/* WARNING: Removing unreachable block (ram,0x037770b4) */
/* WARNING: Removing unreachable block (ram,0x037770f0) */
/* WARNING: Removing unreachable block (ram,0x037770f4) */
/* WARNING: Removing unreachable block (ram,0x037767d0) */
/* WARNING: Removing unreachable block (ram,0x03776980) */
/* WARNING: Removing unreachable block (ram,0x03777728) */
/* WARNING: Removing unreachable block (ram,0x03776984) */
/* WARNING: Removing unreachable block (ram,0x037769a8) */
/* WARNING: Removing unreachable block (ram,0x037769ac) */
/* WARNING: Removing unreachable block (ram,0x037769d0) */
/* WARNING: Removing unreachable block (ram,0x037769d4) */
/* WARNING: Removing unreachable block (ram,0x03777788) */
/* WARNING: Removing unreachable block (ram,0x037769e8) */
/* WARNING: Removing unreachable block (ram,0x03776a00) */
/* WARNING: Removing unreachable block (ram,0x037769f4) */
/* WARNING: Removing unreachable block (ram,0x03776a08) */
/* WARNING: Removing unreachable block (ram,0x03776a60) */
/* WARNING: Removing unreachable block (ram,0x03776a64) */
/* WARNING: Removing unreachable block (ram,0x03776a84) */
/* WARNING: Removing unreachable block (ram,0x03776a88) */
/* WARNING: Removing unreachable block (ram,0x03777790) */
/* WARNING: Removing unreachable block (ram,0x03776acc) */
/* WARNING: Removing unreachable block (ram,0x03776af4) */
/* WARNING: Removing unreachable block (ram,0x03776afc) */
/* WARNING: Removing unreachable block (ram,0x03776fe4) */
/* WARNING: Removing unreachable block (ram,0x03776b08) */
/* WARNING: Removing unreachable block (ram,0x03776b14) */
/* WARNING: Removing unreachable block (ram,0x03776ff4) */
/* WARNING: Removing unreachable block (ram,0x037767d8) */
/* WARNING: Removing unreachable block (ram,0x037767e0) */
/* WARNING: Removing unreachable block (ram,0x03777798) */
/* WARNING: Removing unreachable block (ram,0x037767e4) */
/* WARNING: Removing unreachable block (ram,0x03777738) */
/* WARNING: Removing unreachable block (ram,0x037767f4) */
/* WARNING: Removing unreachable block (ram,0x03776810) */
/* WARNING: Removing unreachable block (ram,0x03776818) */
/* WARNING: Removing unreachable block (ram,0x03776c10) */
/* WARNING: Removing unreachable block (ram,0x03776824) */
/* WARNING: Removing unreachable block (ram,0x03776830) */
/* WARNING: Removing unreachable block (ram,0x03776c20) */
/* WARNING: Removing unreachable block (ram,0x03777758) */
/* WARNING: Removing unreachable block (ram,0x03776c44) */
/* WARNING: Removing unreachable block (ram,0x03776c5c) */
/* WARNING: Removing unreachable block (ram,0x03776c64) */
/* WARNING: Removing unreachable block (ram,0x03776dac) */
/* WARNING: Removing unreachable block (ram,0x03776c70) */
/* WARNING: Removing unreachable block (ram,0x03776c7c) */
/* WARNING: Removing unreachable block (ram,0x03776dbc) */
/* WARNING: Removing unreachable block (ram,0x03777770) */
/* WARNING: Removing unreachable block (ram,0x03776dd0) */
/* WARNING: Removing unreachable block (ram,0x03776de8) */
/* WARNING: Removing unreachable block (ram,0x03776df0) */
/* WARNING: Removing unreachable block (ram,0x03776e94) */
/* WARNING: Removing unreachable block (ram,0x03776dfc) */
/* WARNING: Removing unreachable block (ram,0x03776e08) */
/* WARNING: Removing unreachable block (ram,0x03776ea4) */
/* WARNING: Removing unreachable block (ram,0x037777a0) */
/* WARNING: Removing unreachable block (ram,0x03776eb8) */
/* WARNING: Removing unreachable block (ram,0x03776ed0) */
/* WARNING: Removing unreachable block (ram,0x03776ed8) */
/* WARNING: Removing unreachable block (ram,0x03776f80) */
/* WARNING: Removing unreachable block (ram,0x03776ee4) */
/* WARNING: Removing unreachable block (ram,0x03776ef0) */
/* WARNING: Removing unreachable block (ram,0x03776f90) */
/* WARNING: Removing unreachable block (ram,0x03776fb8) */
/* WARNING: Removing unreachable block (ram,0x03776fbc) */
/* WARNING: Removing unreachable block (ram,0x037776e8) */
/* WARNING: Removing unreachable block (ram,0x03776fcc) */
/* WARNING: Removing unreachable block (ram,0x03776760) */
/* WARNING: Removing unreachable block (ram,0x03776840) */
/* WARNING: Removing unreachable block (ram,0x03776854) */
/* WARNING: Removing unreachable block (ram,0x03776858) */
/* WARNING: Removing unreachable block (ram,0x03777778) */
/* WARNING: Removing unreachable block (ram,0x03776890) */
/* WARNING: Removing unreachable block (ram,0x037768b0) */
/* WARNING: Removing unreachable block (ram,0x03776768) */
/* WARNING: Removing unreachable block (ram,0x03776918) */
/* WARNING: Removing unreachable block (ram,0x03777710) */
/* WARNING: Removing unreachable block (ram,0x0377691c) */
/* WARNING: Removing unreachable block (ram,0x037776f8) */
/* WARNING: Removing unreachable block (ram,0x03776938) */
/* WARNING: Removing unreachable block (ram,0x03776950) */
/* WARNING: Removing unreachable block (ram,0x03776958) */
/* WARNING: Removing unreachable block (ram,0x03776c8c) */
/* WARNING: Removing unreachable block (ram,0x03776964) */
/* WARNING: Removing unreachable block (ram,0x03776970) */
/* WARNING: Removing unreachable block (ram,0x03776c98) */
/* WARNING: Removing unreachable block (ram,0x03777720) */
/* WARNING: Removing unreachable block (ram,0x03776cd8) */
/* WARNING: Removing unreachable block (ram,0x03776d0c) */
/* WARNING: Removing unreachable block (ram,0x03776d34) */
/* WARNING: Removing unreachable block (ram,0x0377753c) */
/* WARNING: Removing unreachable block (ram,0x03777554) */
/* WARNING: Removing unreachable block (ram,0x03777558) */
/* WARNING: Removing unreachable block (ram,0x03777830) */
/* WARNING: Removing unreachable block (ram,0x037775a0) */
/* WARNING: Removing unreachable block (ram,0x037775c8) */
/* WARNING: Removing unreachable block (ram,0x037775d0) */
/* WARNING: Removing unreachable block (ram,0x03777638) */
/* WARNING: Removing unreachable block (ram,0x037775dc) */
/* WARNING: Removing unreachable block (ram,0x037775e8) */
/* WARNING: Removing unreachable block (ram,0x03777648) */
/* WARNING: Removing unreachable block (ram,0x03776d00) */
/* WARNING: Removing unreachable block (ram,0x03776d08) */
/* WARNING: Removing unreachable block (ram,0x03776770) */
/* WARNING: Removing unreachable block (ram,0x0377677c) */
/* WARNING: Removing unreachable block (ram,0x03777730) */
/* WARNING: Removing unreachable block (ram,0x03776780) */
/* WARNING: Removing unreachable block (ram,0x03776798) */
/* WARNING: Removing unreachable block (ram,0x037767a0) */
/* WARNING: Removing unreachable block (ram,0x03776b2c) */
/* WARNING: Removing unreachable block (ram,0x037767ac) */
/* WARNING: Removing unreachable block (ram,0x037767b8) */
/* WARNING: Removing unreachable block (ram,0x03776b3c) */
/* WARNING: Removing unreachable block (ram,0x03776b5c) */
/* WARNING: Removing unreachable block (ram,0x03776b74) */
/* WARNING: Removing unreachable block (ram,0x03776b7c) */
/* WARNING: Removing unreachable block (ram,0x03777378) */
/* WARNING: Removing unreachable block (ram,0x03776b88) */
/* WARNING: Removing unreachable block (ram,0x03776b94) */
/* WARNING: Removing unreachable block (ram,0x03777388) */
/* WARNING: Removing unreachable block (ram,0x037773a8) */
/* WARNING: Removing unreachable block (ram,0x037777c0) */
/* WARNING: Removing unreachable block (ram,0x037773ac) */
/* WARNING: Removing unreachable block (ram,0x037777c8) */
/* WARNING: Removing unreachable block (ram,0x037773c4) */
/* WARNING: Removing unreachable block (ram,0x037773dc) */
/* WARNING: Removing unreachable block (ram,0x037773e4) */
/* WARNING: Removing unreachable block (ram,0x0377740c) */
/* WARNING: Removing unreachable block (ram,0x037773f0) */
/* WARNING: Removing unreachable block (ram,0x037773fc) */
/* WARNING: Removing unreachable block (ram,0x03777418) */
/* WARNING: Removing unreachable block (ram,0x03775d8c) */
/* WARNING: Removing unreachable block (ram,0x03775da4) */
/* WARNING: Removing unreachable block (ram,0x03775dfc) */
/* WARNING: Removing unreachable block (ram,0x037776a0) */
/* WARNING: Removing unreachable block (ram,0x03775e00) */
/* WARNING: Removing unreachable block (ram,0x03775e10) */
/* WARNING: Removing unreachable block (ram,0x037776b8) */
/* WARNING: Removing unreachable block (ram,0x03775e20) */
/* WARNING: Removing unreachable block (ram,0x037776b0) */
/* WARNING: Removing unreachable block (ram,0x03775e28) */
/* WARNING: Removing unreachable block (ram,0x03775e40) */
/* WARNING: Removing unreachable block (ram,0x03775e48) */
/* WARNING: Removing unreachable block (ram,0x03775e70) */
/* WARNING: Removing unreachable block (ram,0x03775e54) */
/* WARNING: Removing unreachable block (ram,0x03775e60) */
/* WARNING: Removing unreachable block (ram,0x03775e80) */
/* WARNING: Removing unreachable block (ram,0x03775e90) */
/* WARNING: Removing unreachable block (ram,0x037776d0) */
/* WARNING: Removing unreachable block (ram,0x03775ea0) */
/* WARNING: Removing unreachable block (ram,0x037776d8) */
/* WARNING: Removing unreachable block (ram,0x03775ea8) */
/* WARNING: Removing unreachable block (ram,0x03775ec0) */
/* WARNING: Removing unreachable block (ram,0x03775ec8) */
/* WARNING: Removing unreachable block (ram,0x03775ef0) */
/* WARNING: Removing unreachable block (ram,0x03775ed4) */
/* WARNING: Removing unreachable block (ram,0x03775ee0) */
/* WARNING: Removing unreachable block (ram,0x03775f00) */
/* WARNING: Removing unreachable block (ram,0x03775f10) */
/* WARNING: Removing unreachable block (ram,0x037776a8) */
/* WARNING: Removing unreachable block (ram,0x03775f14) */
/* WARNING: Removing unreachable block (ram,0x03775f2c) */
/* WARNING: Removing unreachable block (ram,0x03775f34) */
/* WARNING: Removing unreachable block (ram,0x03775f5c) */
/* WARNING: Removing unreachable block (ram,0x03775f40) */
/* WARNING: Removing unreachable block (ram,0x03775f4c) */
/* WARNING: Removing unreachable block (ram,0x03775f6c) */
/* WARNING: Removing unreachable block (ram,0x03775f8c) */
/* WARNING: Removing unreachable block (ram,0x03775fa4) */
/* WARNING: Removing unreachable block (ram,0x03775fac) */
/* WARNING: Removing unreachable block (ram,0x03775fd4) */
/* WARNING: Removing unreachable block (ram,0x03775fb8) */
/* WARNING: Removing unreachable block (ram,0x03775fc4) */
/* WARNING: Removing unreachable block (ram,0x03775fe4) */
/* WARNING: Removing unreachable block (ram,0x037776c0) */
/* WARNING: Removing unreachable block (ram,0x03776008) */
/* WARNING: Removing unreachable block (ram,0x03776020) */
/* WARNING: Removing unreachable block (ram,0x03776028) */
/* WARNING: Removing unreachable block (ram,0x03776050) */
/* WARNING: Removing unreachable block (ram,0x03776034) */
/* WARNING: Removing unreachable block (ram,0x03776040) */
/* WARNING: Removing unreachable block (ram,0x03776060) */
/* WARNING: Removing unreachable block (ram,0x037776c8) */
/* WARNING: Removing unreachable block (ram,0x03776080) */
/* WARNING: Removing unreachable block (ram,0x0377609c) */
/* WARNING: Removing unreachable block (ram,0x037760a4) */
/* WARNING: Removing unreachable block (ram,0x037760cc) */
/* WARNING: Removing unreachable block (ram,0x037760b0) */
/* WARNING: Removing unreachable block (ram,0x037760bc) */
/* WARNING: Removing unreachable block (ram,0x037760dc) */
/* WARNING: Removing unreachable block (ram,0x037761d8) */
/* WARNING: Removing unreachable block (ram,0x037761f0) */
/* WARNING: Removing unreachable block (ram,0x037761f8) */
/* WARNING: Removing unreachable block (ram,0x03776220) */
/* WARNING: Removing unreachable block (ram,0x03776204) */
/* WARNING: Removing unreachable block (ram,0x03776210) */
/* WARNING: Removing unreachable block (ram,0x03776230) */
/* WARNING: Removing unreachable block (ram,0x03776254) */
/* WARNING: Removing unreachable block (ram,0x0377626c) */
/* WARNING: Removing unreachable block (ram,0x03776274) */
/* WARNING: Removing unreachable block (ram,0x0377629c) */
/* WARNING: Removing unreachable block (ram,0x03776280) */
/* WARNING: Removing unreachable block (ram,0x0377628c) */
/* WARNING: Removing unreachable block (ram,0x037762ac) */
/* WARNING: Removing unreachable block (ram,0x037762dc) */
/* WARNING: Removing unreachable block (ram,0x037763d0) */
/* WARNING: Removing unreachable block (ram,0x037763e4) */
/* WARNING: Removing unreachable block (ram,0x037763e8) */
/* WARNING: Removing unreachable block (ram,0x037762f4) */
/* WARNING: Removing unreachable block (ram,0x03776304) */
/* WARNING: Removing unreachable block (ram,0x03776318) */
/* WARNING: Removing unreachable block (ram,0x03777820) */
/* WARNING: Removing unreachable block (ram,0x03776328) */
/* WARNING: Removing unreachable block (ram,0x0377632c) */
/* WARNING: Removing unreachable block (ram,0x03776340) */
/* WARNING: Removing unreachable block (ram,0x03776344) */
/* WARNING: Removing unreachable block (ram,0x03776384) */
/* WARNING: Removing unreachable block (ram,0x037777d8) */
/* WARNING: Removing unreachable block (ram,0x03776388) */
/* WARNING: Removing unreachable block (ram,0x037763a0) */
/* WARNING: Removing unreachable block (ram,0x037763a8) */
/* WARNING: Removing unreachable block (ram,0x03776528) */
/* WARNING: Removing unreachable block (ram,0x037763b4) */
/* WARNING: Removing unreachable block (ram,0x037763c0) */
/* WARNING: Removing unreachable block (ram,0x03776538) */
/* WARNING: Removing unreachable block (ram,0x037777e0) */
/* WARNING: Removing unreachable block (ram,0x0377654c) */
/* WARNING: Removing unreachable block (ram,0x03776564) */
/* WARNING: Removing unreachable block (ram,0x0377656c) */
/* WARNING: Removing unreachable block (ram,0x03776594) */
/* WARNING: Removing unreachable block (ram,0x03776578) */
/* WARNING: Removing unreachable block (ram,0x03776584) */
/* WARNING: Removing unreachable block (ram,0x037765a0) */
/* WARNING: Removing unreachable block (ram,0x037765b0) */
/* WARNING: Removing unreachable block (ram,0x037777f0) */
/* WARNING: Removing unreachable block (ram,0x037765c0) */
/* WARNING: Removing unreachable block (ram,0x037777e8) */
/* WARNING: Removing unreachable block (ram,0x037765d4) */
/* WARNING: Removing unreachable block (ram,0x03777818) */
/* WARNING: Removing unreachable block (ram,0x037765e8) */
/* WARNING: Removing unreachable block (ram,0x03777810) */
/* WARNING: Removing unreachable block (ram,0x037765fc) */
/* WARNING: Removing unreachable block (ram,0x037777f8) */
/* WARNING: Removing unreachable block (ram,0x03776610) */
/* WARNING: Removing unreachable block (ram,0x03777808) */
/* WARNING: Removing unreachable block (ram,0x03776624) */
/* WARNING: Removing unreachable block (ram,0x03777800) */
/* WARNING: Removing unreachable block (ram,0x03776628) */
/* WARNING: Removing unreachable block (ram,0x03776658) */
/* WARNING: Removing unreachable block (ram,0x0377666c) */
/* WARNING: Removing unreachable block (ram,0x03776670) */
/* WARNING: Removing unreachable block (ram,0x037776e0) */
/* WARNING: Removing unreachable block (ram,0x037766bc) */
/* WARNING: Removing unreachable block (ram,0x037766e4) */
/* WARNING: Removing unreachable block (ram,0x037766ec) */
/* WARNING: Removing unreachable block (ram,0x0377671c) */
/* WARNING: Removing unreachable block (ram,0x037766f8) */
/* WARNING: Removing unreachable block (ram,0x03776704) */
/* WARNING: Removing unreachable block (ram,0x0377672c) */
/* WARNING: Removing unreachable block (ram,0x037762bc) */
/* WARNING: Removing unreachable block (ram,0x037760f8) */
/* WARNING: Removing unreachable block (ram,0x037777b0) */
/* WARNING: Removing unreachable block (ram,0x03776108) */
/* WARNING: Removing unreachable block (ram,0x03776128) */
/* WARNING: Removing unreachable block (ram,0x0377612c) */
/* WARNING: Removing unreachable block (ram,0x037777b8) */
/* WARNING: Removing unreachable block (ram,0x03776178) */
/* WARNING: Removing unreachable block (ram,0x037761a0) */
/* WARNING: Removing unreachable block (ram,0x037761a8) */
/* WARNING: Removing unreachable block (ram,0x037764b8) */
/* WARNING: Removing unreachable block (ram,0x037761b4) */
/* WARNING: Removing unreachable block (ram,0x037761c0) */
/* WARNING: Removing unreachable block (ram,0x037764c8) */
/* WARNING: Removing unreachable block (ram,0x03777478) */
/* WARNING: Removing unreachable block (ram,0x03777490) */
/* WARNING: Removing unreachable block (ram,0x03777494) */
/* WARNING: Removing unreachable block (ram,0x03777828) */
/* WARNING: Removing unreachable block (ram,0x037774dc) */
/* WARNING: Removing unreachable block (ram,0x03777504) */
/* WARNING: Removing unreachable block (ram,0x0377750c) */
/* WARNING: Removing unreachable block (ram,0x03777600) */
/* WARNING: Removing unreachable block (ram,0x03777518) */
/* WARNING: Removing unreachable block (ram,0x03777524) */
/* WARNING: Removing unreachable block (ram,0x03777610) */
/* WARNING: Removing unreachable block (ram,0x0377766c) */
/* WARNING: Removing unreachable block (ram,0x03777674) */
/* WARNING: Removing unreachable block (ram,0x03777b34) */
/* WARNING: Removing unreachable block (ram,0x03777b3c) */
/* WARNING: Removing unreachable block (ram,0x03777694) */
/* WARNING: Removing unreachable block (ram,0x0377769c) */
/* WARNING: Removing unreachable block (ram,0x03777b10) */
/* WARNING: Removing unreachable block (ram,0x037784c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_03775b80(long **param_1,long *param_2,long *param_3,long **param_4,long *param_5,
                  long *param_6,long *param_7)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long **pplVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  long *plVar21;
  undefined8 unaff_x24;
  long *unaff_x25;
  long *plVar22;
  long *unaff_x26;
  undefined *unaff_x27;
  long **unaff_x28;
  undefined *unaff_x29;
  undefined8 uVar23;
  code *pcVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_8a0 [80];
  undefined1 auStack_850 [80];
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long *plStack_7b0;
  undefined8 *puStack_7a8;
  long **pplStack_7a0;
  long *plStack_798;
  undefined8 uStack_790;
  long **pplStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  long lStack_768;
  undefined8 uStack_760;
  long **pplStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined *puStack_710;
  undefined8 uStack_708;
  long **pplStack_700;
  undefined *puStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined8 uStack_6e0;
  long *plStack_6d8;
  long *plStack_6d0;
  long **pplStack_6c8;
  long *plStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  long *plStack_678;
  long **pplStack_670;
  long *plStack_668;
  int iStack_65c;
  long *plStack_658;
  
  plVar16 = param_5;
  if ((bRam0000000005e2df8a & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9ea8);
    func_0x0249f8e4(&DAT_05a43a40);
    func_0x0249f8e4(&DAT_05a441d8);
    func_0x0249f8e4(&DAT_05a07d40);
    func_0x0249f8e4(&DAT_05a07d48);
    func_0x0249f8e4(&DAT_05a07d50);
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059df038);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e01e0);
    func_0x0249f8e4(&DAT_059e0210);
    func_0x0249f8e4(&DAT_059cd830);
    func_0x0249f8e4(&DAT_059e0730);
    func_0x0249f8e4(&DAT_05a0f7d8);
    func_0x0249f8e4(&DAT_05a157c0);
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e4860);
    func_0x0249f8e4(&DAT_05a2ed10);
    bRam0000000005e2df8a = 1;
  }
  plVar21 = (long *)0x5e2d000;
  plVar22 = param_3;
  if ((bRam0000000005e2dfb8 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059c9f90);
    func_0x0249f8e4(&DAT_059cb2d8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_05a2ecf8);
    func_0x0249f8e4(&DAT_05a2ed00);
    func_0x0249f8e4(&DAT_05a34f38);
    bRam0000000005e2dfb8 = 1;
  }
  plStack_668 = (long *)0x0;
  if (param_1[0x13] != (long *)0x0) {
    func_0x028ed1d8(param_1[0x13],_DAT_05a2ed00);
    plVar4 = (long *)func_0x0376e0dc(param_1);
    if (plVar4 != (long *)0x0) {
      lVar17 = *plVar4;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _DAT_059c9f90) {
            puVar5 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            plVar13 = plVar22;
            goto LAB_03777c64;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      plVar13 = (long *)0x0;
      puVar5 = (undefined8 *)func_0x024d927c(plVar4);
LAB_03777c64:
      plStack_668 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      pplStack_670 = &plStack_668;
      plStack_678 = (long *)0x0;
      plVar21 = plVar4;
      if (plStack_668 != (long *)0x0) {
        unaff_x27 = &DAT_059df6e0;
        unaff_x28 = (long **)&DAT_059cb2d8;
        unaff_x29 = &DAT_05a2ecf8;
        plVar4 = param_5;
        do {
          plVar21 = plStack_668;
          lVar17 = *plStack_668;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059df6e0) {
                puVar5 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03777ce8;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar13 = (long *)0x0;
          puVar5 = (undefined8 *)func_0x024d927c(plStack_668);
LAB_03777ce8:
          uVar18 = (*(code *)*puVar5)(plVar21,puVar5[1]);
          plVar12 = plStack_668;
          param_5 = plVar4;
          if ((uVar18 & 1) == 0) goto LAB_03777e10;
          plVar22 = plVar13;
          if (plStack_668 == (long *)0x0) {
LAB_03777ea8:
            auVar25._8_8_ = 0;
            auVar25._0_8_ = plVar4;
            func_0x0249fb90();
LAB_03777eac:
            plVar21 = auVar25._8_8_;
            param_5 = auVar25._0_8_;
            func_0x0249fb90();
            goto LAB_03777eb0;
          }
          lVar17 = *plStack_668;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059cb2d8) {
                puVar5 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03777d4c;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar13 = (long *)0x0;
          puVar5 = (undefined8 *)func_0x024d927c(plStack_668);
LAB_03777d4c:
          auVar25 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          plVar22 = auVar25._8_8_;
          param_5 = auVar25._0_8_;
          if (plVar22 == (long *)0x0) {
            func_0x0249fb90();
            plVar22 = plVar13;
            goto LAB_03777ea8;
          }
          param_6 = (long *)0x0;
          plVar13 = param_5;
          param_4 = param_1;
          plVar16 = param_3;
          auVar26 = func_0x036d8938(plVar22,param_2);
          unaff_x24 = auVar26._0_8_;
          if (auVar26._0_4_ != 0) {
            uVar6 = func_0x03530c84(auVar26._8_8_,0);
            unaff_x25 = (long *)func_0x03786fa8(param_1,uVar6);
            lStack_690 = 0;
            uStack_688 = 0;
            unaff_x26 = param_1[0x13];
            uStack_680 = 0;
            param_4 = &plStack_658;
            plVar16 = _DAT_05a34f38;
            iStack_65c = auVar26._0_4_;
            plStack_658 = param_5;
            func_0x0295639c(&lStack_690,&iStack_65c);
            if (unaff_x26 != (long *)0x0) {
              uStack_6a8 = uStack_688;
              lStack_6b0 = lStack_690;
              uStack_6a0 = uStack_680;
              plVar13 = &lStack_6b0;
              param_4 = _DAT_05a2ecf8;
              plStack_658 = unaff_x25;
              func_0x028ecf58(unaff_x26,&plStack_658);
              goto LAB_03777e04;
            }
            goto LAB_03777eac;
          }
LAB_03777e04:
          plVar21 = plStack_668;
          plVar4 = param_5;
        } while (plStack_668 != (long *)0x0);
      }
      uVar18 = func_0x0249fb90();
LAB_03777e10:
      param_3 = (long *)0x0;
      pplVar14 = &plStack_668;
      goto LAB_03777e18;
    }
  }
LAB_03777eb0:
  func_0x0249fb90();
  plVar13 = plVar22;
  while( true ) {
    auVar27 = func_0x0249fb88(param_3);
    uVar6 = auVar27._0_8_;
    if (auVar27._8_4_ != 1) break;
    puVar5 = (undefined8 *)func_0x054ed080(uVar6);
    param_3 = (long *)*puVar5;
    plStack_678 = param_3;
    uVar18 = func_0x054ed090();
    pplVar14 = pplStack_670;
LAB_03777e18:
    param_2 = *pplVar14;
    if (param_2 != (long *)0x0) {
      lVar17 = *param_2;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _DAT_059df598) {
            puVar5 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03777e74;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      plVar13 = (long *)0x0;
      puVar5 = (undefined8 *)func_0x024d927c(param_2);
LAB_03777e74:
      uVar18 = (*(code *)*puVar5)(param_2,puVar5[1]);
    }
    if (param_3 == (long *)0x0) {
      return uVar18;
    }
  }
  func_0x022bd79c(&plStack_678);
  func_0x0258f7ac(uVar6);
  auVar25 = func_0x022bd790();
  plVar12 = auVar25._8_8_;
  lVar17 = auVar25._0_8_;
  uStack_708 = 0x3777f20;
  plVar22 = plVar13;
  pplVar14 = param_4;
  plVar4 = plVar16;
  puStack_710 = unaff_x29;
  pplStack_700 = unaff_x28;
  puStack_6f8 = unaff_x27;
  plStack_6f0 = unaff_x26;
  plStack_6e8 = unaff_x25;
  uStack_6e0 = unaff_x24;
  plStack_6d8 = param_5;
  plStack_6d0 = plVar21;
  pplStack_6c8 = param_1;
  plStack_6c0 = param_2;
  uStack_6b8 = uVar6;
  if ((bRam0000000005e2df8b & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_05a04ec0);
    func_0x0249f8e4(&DAT_05a04ec8);
    func_0x0249f8e4(&DAT_05a04ed0);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca318);
    func_0x0249f8e4(&DAT_059cb670);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e0730);
    func_0x0249f8e4(&DAT_05a1b940);
    func_0x0249f8e4(&DAT_05a1b930);
    func_0x0249f8e4(&DAT_059d0c80);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a30640);
    func_0x0249f8e4(&DAT_059d55a8);
    bRam0000000005e2df8b = 1;
  }
  lStack_768 = 0;
  pplStack_7a0 = (long **)0x0;
  plStack_798 = (long *)0x0;
  pplStack_788 = (long **)0x0;
  uStack_790 = 0;
  uStack_778 = 0;
  uStack_780 = 0;
  lVar7 = func_0x0249fb80(_DAT_059d0c80);
  func_0x0282ee2c(lVar7,_DAT_05a1b930);
  lStack_768 = lVar7;
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _DAT_059e0730) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar19 + 5) * 0x10 + 0x138);
          goto LAB_037780d8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059e0730,5);
LAB_037780d8:
    plVar22 = (long *)puVar5[1];
    (*(code *)*puVar5)(plVar13,&lStack_768,plVar22);
    if (lStack_768 != 0) {
      plVar22 = _DAT_05a1b940;
      func_0x028310e8(lStack_768,&uStack_760,_DAT_05a1b940);
      puStack_7a8 = &uStack_790;
      plStack_7b0 = (long *)0x0;
      pplStack_788 = pplStack_758;
      uStack_790 = uStack_760;
      uStack_778 = uStack_748;
      uStack_780 = uStack_750;
      while( true ) {
        do {
          uVar18 = func_0x02a5d2d0(&uStack_790,_DAT_05a04ec8);
          lVar7 = _DAT_05a04ed0;
          plVar21 = plStack_7b0;
          if ((uVar18 & 1) == 0) goto LAB_037788a8;
          lVar8 = *(long *)(_DAT_05a04ed0 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
          lVar9 = lVar8;
          if ((uVar2 & 1) == 0) {
            lVar9 = func_0x024d8f40();
            lVar8 = *(long *)(lVar7 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
          }
          plVar22 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar8 = func_0x024d8f40();
          }
          uVar6 = func_0x0249f90c(&uStack_790,
                                  *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
          func_0x054ed0d0(&uStack_760,uVar6,plVar22);
          iVar1 = (int)pplStack_758;
        } while ((int)pplStack_758 < 1);
        if (plVar12 == (long *)0x0) break;
        uVar3 = uStack_760._4_4_;
        lVar7 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _DAT_059df8e8) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar19 + 5) * 0x10 + 0x138);
              goto LAB_03778210;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059df8e8,5);
LAB_03778210:
        uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        plVar22 = (long *)0x0;
        pplVar10 = (long **)func_0x034c0920(uVar6,uVar3,0);
        if (pplVar10 != (long **)0x0) {
          lVar7 = *plVar12;
          uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059e0220) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar19 + 0x25) * 0x10 + 0x138);
                goto LAB_03778288;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar22 = (long *)0x25;
          puVar5 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0220,0x25);
LAB_03778288:
          plVar21 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
          if (plVar21 == (long *)0x0) goto LAB_037788f8;
          lVar7 = *plVar21;
          uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _DAT_059ca318) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_037782f0;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          plVar22 = (long *)0x0;
          puVar5 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059ca318,0);
LAB_037782f0:
          plVar21 = (long *)(*(code *)*puVar5)(plVar21,puVar5[1]);
          pplStack_758 = &plStack_798;
          uStack_760 = 0;
          do {
            plStack_798 = plVar21;
            if (plVar21 == (long *)0x0) {
              auVar27 = func_0x0249fb90();
              goto LAB_03778908;
            }
            lVar7 = *plVar21;
            uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059df6e0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_03778364;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            plVar22 = (long *)0x0;
            puVar5 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df6e0,0);
LAB_03778364:
            uVar18 = (*(code *)*puVar5)(plVar21,puVar5[1]);
            plVar21 = plStack_798;
            if ((uVar18 & 1) == 0) {
              lVar7 = 0;
              break;
            }
            if (plStack_798 == (long *)0x0) {
              auVar27 = func_0x0249fb90();
              goto LAB_03778908;
            }
            lVar7 = *plStack_798;
            uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059cb670) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_037783d0;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            plVar22 = (long *)0x0;
            puVar5 = (undefined8 *)func_0x024d927c(plStack_798,_DAT_059cb670,0);
LAB_037783d0:
            lVar7 = (*(code *)*puVar5)(plVar21,puVar5[1]);
            if (lVar7 == 0) {
              auVar27 = func_0x0249fb90();
              goto LAB_03778908;
            }
            uVar6 = func_0x0390534c(lVar7,0);
            uVar23 = *(undefined8 *)(lVar17 + 0x30);
            if (*(int *)(_DAT_059d55a8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar22 = _DAT_05a30640;
            uVar18 = func_0x02903704(uVar6,uVar23,_DAT_05a30640);
            plVar21 = plStack_798;
          } while ((uVar18 & 1) == 0);
          plVar21 = plStack_798;
          if (plStack_798 != (long *)0x0) {
            lVar9 = *plStack_798;
            uVar18 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059df598) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_037784b0;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            plVar22 = (long *)0x0;
            puVar5 = (undefined8 *)func_0x024d927c(plStack_798,_DAT_059df598,0);
LAB_037784b0:
            (*(code *)*puVar5)(plVar21,puVar5[1]);
          }
          iVar20 = 0;
          if (iVar1 < 2) {
            iVar1 = 1;
          }
          do {
            unaff_x28 = (long **)func_0x0376eb00(lVar17);
            pplStack_7a0 = unaff_x28;
            if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar11 = func_0x0376edd4(&pplStack_7a0);
            lVar9 = *plVar12;
            uVar2 = *(ushort *)(lVar9 + 0x12e);
            uVar18 = (ulong)uVar2;
            if ((uVar11 & 1) != 0) {
              if (uVar2 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == _DAT_059e0220) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                    goto LAB_03778598;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              plVar22 = (long *)0x4;
              puVar5 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0220,4);
LAB_03778598:
              unaff_x28 = (long **)(*(code *)*puVar5)(plVar12,puVar5[1]);
              lVar9 = *plVar12;
              uVar18 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == _DAT_059df8e8) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar19 + 5) * 0x10 + 0x138);
                    goto LAB_03778704;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              plVar22 = (long *)0x5;
              puVar5 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059df8e8,5);
LAB_03778704:
              uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
              if (unaff_x28 != (long **)0x0) {
                func_0x036879a8(unaff_x28,uVar3,uVar6,*(undefined8 *)(lVar17 + 0x30),lVar7,0);
                uStack_7e8 = 0;
                uStack_7f0 = 0;
                uStack_7d8 = 0;
                uStack_7e0 = 0;
                uStack_7c8 = 0;
                uStack_7d0 = 0;
                uStack_7b8 = 0;
                uStack_7c0 = 0;
                uStack_7f8 = 0;
                uStack_800 = 0;
                plVar22 = plVar16;
                pplVar14 = pplVar10;
                plVar4 = param_6;
                func_0x034ba9b8(&uStack_800,1,plVar16,pplVar10,param_6,0,5,0);
                lVar9 = _DAT_059c9978;
                if (param_7 != (long *)0x0) {
                  func_0x054ed0d0(auStack_850,&uStack_800,0x50);
                  lVar8 = *param_7;
                  uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar18 != 0) {
                    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == lVar9) {
                        unaff_x28 = (long **)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                        goto LAB_03778810;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  unaff_x28 = (long **)func_0x024d927c(param_7,lVar9,2);
LAB_03778810:
                  pcVar24 = (code *)*unaff_x28;
                  func_0x054ed0d0(&uStack_760,auStack_850,0x50);
                  plVar22 = unaff_x28[1];
                  (*pcVar24)(param_7,&uStack_760,plVar22);
                  goto LAB_03778834;
                }
                func_0x0249fb90();
              }
              func_0x0249fb90();
LAB_037788e8:
              func_0x0249fb90();
              goto LAB_037788ec;
            }
            if (uVar2 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _DAT_059e0220) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar19 + 0xc) * 0x10 + 0x138);
                  goto LAB_03778600;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0220,0xc);
LAB_03778600:
            uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
            uVar6 = func_0x03774f00(lVar17,plVar12,unaff_x28,pplVar10,plVar12,uVar6,2,0);
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar4 = (long *)func_0x03530158(param_6,0);
            uStack_7e8 = 0;
            uStack_7f0 = 0;
            uStack_7d8 = 0;
            uStack_7e0 = 0;
            uStack_7c8 = 0;
            uStack_7d0 = 0;
            uStack_7b8 = 0;
            uStack_7c0 = 0;
            uStack_7f8 = 0;
            uStack_800 = 0;
            plVar22 = plVar16;
            pplVar14 = unaff_x28;
            func_0x034ba910(&uStack_800,1,plVar16,unaff_x28,plVar4,uVar6,param_4,5,0);
            lVar9 = _DAT_059c9978;
            if (param_7 == (long *)0x0) goto LAB_037788e8;
            func_0x054ed0d0(auStack_8a0,&uStack_800,0x50);
            lVar8 = *param_7;
            uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar9) {
                  unaff_x28 = (long **)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_037787d8;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            unaff_x28 = (long **)func_0x024d927c(param_7,lVar9,2);
LAB_037787d8:
            pcVar24 = (code *)*unaff_x28;
            func_0x054ed0d0(&uStack_760,auStack_8a0,0x50);
            plVar22 = unaff_x28[1];
            (*pcVar24)(param_7,&uStack_760,plVar22);
LAB_03778834:
            iVar20 = iVar20 + 1;
          } while (iVar20 != iVar1);
        }
      }
LAB_037788ec:
      func_0x0249fb90();
      func_0x0249fb88(unaff_x28);
LAB_037788f8:
      func_0x0249fb90();
    }
  }
  func_0x0249fb90();
  do {
    auVar27 = func_0x0249fb88(param_7);
LAB_03778908:
    func_0x022bd79c(&uStack_760);
    uVar15 = (uint)plVar4;
    if (auVar27._8_4_ != 1) {
      func_0x0240ceb0(&plStack_7b0);
      func_0x0258f7ac(auVar27._0_8_);
      auVar25 = func_0x022bd790();
      uVar6 = auVar25._8_8_;
      lVar17 = auVar25._0_8_;
      if ((bRam0000000005e2dfb3 & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2c00);
        bRam0000000005e2dfb3 = 1;
      }
      uVar18 = func_0x037868cc(lVar17,plVar22,uVar6,uVar15 & 1);
      uVar23 = func_0x03530c84(pplVar14,0);
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2c00);
      }
      uVar23 = func_0x03530158(uVar23,0);
      func_0x03787050(lVar17,uVar23,uVar6);
      func_0x0378717c(lVar17,uVar6,uVar23);
      uVar6 = func_0x03530c84(pplVar14,0);
      *(undefined8 *)(lVar17 + 0x20) = uVar6;
      return uVar18;
    }
    puVar5 = (undefined8 *)func_0x054ed080(auVar27._0_8_);
    plVar21 = (long *)*puVar5;
    plStack_7b0 = plVar21;
    func_0x054ed090();
LAB_037788a8:
    uVar18 = func_0x02a5d2cc(puStack_7a8,_DAT_05a04ec0);
    param_7 = plVar21;
  } while (plVar21 != (long *)0x0);
  return uVar18;
}

