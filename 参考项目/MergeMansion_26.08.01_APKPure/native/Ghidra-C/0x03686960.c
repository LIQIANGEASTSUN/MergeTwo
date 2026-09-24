/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Items.MergeItem ReplaceItem(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate itemCoord, GameLogic.Player.Items.IItemDefinition replacementItem, Metaplay.Core.MetaTime replacementTimestamp, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 03786960
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x026e9da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ea3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ea430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ea900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eaa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eaf94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eafcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eb290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eb670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eabe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x026eb674) */
/* WARNING: Removing unreachable block (ram,0x04731c80) */
/* WARNING: Removing unreachable block (ram,0x04731ca0) */
/* WARNING: Removing unreachable block (ram,0x04731cd8) */
/* WARNING: Removing unreachable block (ram,0x04731ce0) */
/* WARNING: Removing unreachable block (ram,0x04731cf8) */
/* WARNING: Removing unreachable block (ram,0x04731d00) */
/* WARNING: Removing unreachable block (ram,0x04731d28) */
/* WARNING: Removing unreachable block (ram,0x04731d0c) */
/* WARNING: Removing unreachable block (ram,0x04731d18) */
/* WARNING: Removing unreachable block (ram,0x04731d34) */
/* WARNING: Removing unreachable block (ram,0x04731d50) */
/* WARNING: Removing unreachable block (ram,0x04731d68) */
/* WARNING: Removing unreachable block (ram,0x04731d78) */
/* WARNING: Removing unreachable block (ram,0x04731d80) */
/* WARNING: Removing unreachable block (ram,0x04731da8) */
/* WARNING: Removing unreachable block (ram,0x04731d8c) */
/* WARNING: Removing unreachable block (ram,0x04731d98) */
/* WARNING: Removing unreachable block (ram,0x04731db4) */
/* WARNING: Removing unreachable block (ram,0x04731dc4) */
/* WARNING: Removing unreachable block (ram,0x04731ec0) */
/* WARNING: Removing unreachable block (ram,0x04731ec4) */
/* WARNING: Removing unreachable block (ram,0x04731ef0) */
/* WARNING: Removing unreachable block (ram,0x04731dcc) */
/* WARNING: Removing unreachable block (ram,0x04731ddc) */
/* WARNING: Removing unreachable block (ram,0x04731de4) */
/* WARNING: Removing unreachable block (ram,0x04731e0c) */
/* WARNING: Removing unreachable block (ram,0x04731df0) */
/* WARNING: Removing unreachable block (ram,0x04731dfc) */
/* WARNING: Removing unreachable block (ram,0x04731e18) */
/* WARNING: Removing unreachable block (ram,0x04731e30) */
/* WARNING: Removing unreachable block (ram,0x04731e34) */
/* WARNING: Removing unreachable block (ram,0x04731e3c) */
/* WARNING: Removing unreachable block (ram,0x04731e44) */
/* WARNING: Removing unreachable block (ram,0x04731e5c) */
/* WARNING: Removing unreachable block (ram,0x04731e64) */
/* WARNING: Removing unreachable block (ram,0x04731e8c) */
/* WARNING: Removing unreachable block (ram,0x04731e70) */
/* WARNING: Removing unreachable block (ram,0x04731e7c) */
/* WARNING: Removing unreachable block (ram,0x04731e98) */
/* WARNING: Removing unreachable block (ram,0x04731ea4) */
/* WARNING: Removing unreachable block (ram,0x04731ef8) */
/* WARNING: Removing unreachable block (ram,0x04731f0c) */
/* WARNING: Removing unreachable block (ram,0x04731f38) */
/* WARNING: Removing unreachable block (ram,0x04731f70) */
/* WARNING: Removing unreachable block (ram,0x04731fa8) */
/* WARNING: Removing unreachable block (ram,0x04731fb0) */
/* WARNING: Removing unreachable block (ram,0x04731fc8) */
/* WARNING: Removing unreachable block (ram,0x04731fd0) */
/* WARNING: Removing unreachable block (ram,0x04731ff8) */
/* WARNING: Removing unreachable block (ram,0x04731fdc) */
/* WARNING: Removing unreachable block (ram,0x04731fe8) */
/* WARNING: Removing unreachable block (ram,0x04732004) */
/* WARNING: Removing unreachable block (ram,0x047321cc) */
/* WARNING: Removing unreachable block (ram,0x04732028) */
/* WARNING: Removing unreachable block (ram,0x04732044) */
/* WARNING: Removing unreachable block (ram,0x04732054) */
/* WARNING: Removing unreachable block (ram,0x0473205c) */
/* WARNING: Removing unreachable block (ram,0x04732084) */
/* WARNING: Removing unreachable block (ram,0x04732068) */
/* WARNING: Removing unreachable block (ram,0x04732074) */
/* WARNING: Removing unreachable block (ram,0x04732090) */
/* WARNING: Removing unreachable block (ram,0x047320a0) */
/* WARNING: Removing unreachable block (ram,0x047321b4) */
/* WARNING: Removing unreachable block (ram,0x047321b8) */
/* WARNING: Removing unreachable block (ram,0x047320a8) */
/* WARNING: Removing unreachable block (ram,0x047320b8) */
/* WARNING: Removing unreachable block (ram,0x047320c0) */
/* WARNING: Removing unreachable block (ram,0x047320e8) */
/* WARNING: Removing unreachable block (ram,0x047320cc) */
/* WARNING: Removing unreachable block (ram,0x047320d8) */
/* WARNING: Removing unreachable block (ram,0x047320f4) */
/* WARNING: Removing unreachable block (ram,0x04732108) */
/* WARNING: Removing unreachable block (ram,0x04732114) */
/* WARNING: Removing unreachable block (ram,0x0473211c) */
/* WARNING: Removing unreachable block (ram,0x04732120) */
/* WARNING: Removing unreachable block (ram,0x04732128) */
/* WARNING: Removing unreachable block (ram,0x04732130) */
/* WARNING: Removing unreachable block (ram,0x04732148) */
/* WARNING: Removing unreachable block (ram,0x04732150) */
/* WARNING: Removing unreachable block (ram,0x04732178) */
/* WARNING: Removing unreachable block (ram,0x0473215c) */
/* WARNING: Removing unreachable block (ram,0x04732168) */
/* WARNING: Removing unreachable block (ram,0x04732184) */
/* WARNING: Removing unreachable block (ram,0x04732190) */
/* WARNING: Removing unreachable block (ram,0x047321d4) */
/* WARNING: Removing unreachable block (ram,0x04732194) */
/* WARNING: Removing unreachable block (ram,0x047321dc) */
/* WARNING: Removing unreachable block (ram,0x047321e0) */
/* WARNING: Removing unreachable block (ram,0x04732210) */
/* WARNING: Removing unreachable block (ram,0x0473223c) */
/* WARNING: Removing unreachable block (ram,0x04732274) */
/* WARNING: Removing unreachable block (ram,0x047322ac) */
/* WARNING: Removing unreachable block (ram,0x047322b4) */
/* WARNING: Removing unreachable block (ram,0x047322cc) */
/* WARNING: Removing unreachable block (ram,0x047322d4) */
/* WARNING: Removing unreachable block (ram,0x047322fc) */
/* WARNING: Removing unreachable block (ram,0x047322e0) */
/* WARNING: Removing unreachable block (ram,0x047322ec) */
/* WARNING: Removing unreachable block (ram,0x04732308) */
/* WARNING: Removing unreachable block (ram,0x047324d0) */
/* WARNING: Removing unreachable block (ram,0x0473232c) */
/* WARNING: Removing unreachable block (ram,0x04732348) */
/* WARNING: Removing unreachable block (ram,0x04732358) */
/* WARNING: Removing unreachable block (ram,0x04732360) */
/* WARNING: Removing unreachable block (ram,0x04732388) */
/* WARNING: Removing unreachable block (ram,0x0473236c) */
/* WARNING: Removing unreachable block (ram,0x04732378) */
/* WARNING: Removing unreachable block (ram,0x04732394) */
/* WARNING: Removing unreachable block (ram,0x047323a4) */
/* WARNING: Removing unreachable block (ram,0x047324b8) */
/* WARNING: Removing unreachable block (ram,0x047324bc) */
/* WARNING: Removing unreachable block (ram,0x047323ac) */
/* WARNING: Removing unreachable block (ram,0x047323bc) */
/* WARNING: Removing unreachable block (ram,0x047323c4) */
/* WARNING: Removing unreachable block (ram,0x047323ec) */
/* WARNING: Removing unreachable block (ram,0x047323d0) */
/* WARNING: Removing unreachable block (ram,0x047323dc) */
/* WARNING: Removing unreachable block (ram,0x047323f8) */
/* WARNING: Removing unreachable block (ram,0x0473240c) */
/* WARNING: Removing unreachable block (ram,0x04732418) */
/* WARNING: Removing unreachable block (ram,0x04732420) */
/* WARNING: Removing unreachable block (ram,0x04732424) */
/* WARNING: Removing unreachable block (ram,0x0473242c) */
/* WARNING: Removing unreachable block (ram,0x04732434) */
/* WARNING: Removing unreachable block (ram,0x0473244c) */
/* WARNING: Removing unreachable block (ram,0x04732454) */
/* WARNING: Removing unreachable block (ram,0x0473247c) */
/* WARNING: Removing unreachable block (ram,0x04732460) */
/* WARNING: Removing unreachable block (ram,0x0473246c) */
/* WARNING: Removing unreachable block (ram,0x04732488) */
/* WARNING: Removing unreachable block (ram,0x04732494) */
/* WARNING: Removing unreachable block (ram,0x047324d8) */
/* WARNING: Removing unreachable block (ram,0x04732498) */
/* WARNING: Removing unreachable block (ram,0x047324e0) */
/* WARNING: Removing unreachable block (ram,0x047324e4) */
/* WARNING: Removing unreachable block (ram,0x04732514) */
/* WARNING: Removing unreachable block (ram,0x04732540) */
/* WARNING: Removing unreachable block (ram,0x0473257c) */
/* WARNING: Removing unreachable block (ram,0x047325b4) */
/* WARNING: Removing unreachable block (ram,0x047325bc) */
/* WARNING: Removing unreachable block (ram,0x047325d4) */
/* WARNING: Removing unreachable block (ram,0x047325dc) */
/* WARNING: Removing unreachable block (ram,0x04732604) */
/* WARNING: Removing unreachable block (ram,0x047325e8) */
/* WARNING: Removing unreachable block (ram,0x047325f4) */
/* WARNING: Removing unreachable block (ram,0x04732610) */
/* WARNING: Removing unreachable block (ram,0x0473264c) */
/* WARNING: Removing unreachable block (ram,0x0473265c) */
/* WARNING: Removing unreachable block (ram,0x047327dc) */
/* WARNING: Removing unreachable block (ram,0x04732664) */
/* WARNING: Removing unreachable block (ram,0x04732674) */
/* WARNING: Removing unreachable block (ram,0x0473267c) */
/* WARNING: Removing unreachable block (ram,0x047326a4) */
/* WARNING: Removing unreachable block (ram,0x04732688) */
/* WARNING: Removing unreachable block (ram,0x04732694) */
/* WARNING: Removing unreachable block (ram,0x047326b0) */
/* WARNING: Removing unreachable block (ram,0x0473273c) */
/* WARNING: Removing unreachable block (ram,0x047326c0) */
/* WARNING: Removing unreachable block (ram,0x047327e0) */
/* WARNING: Removing unreachable block (ram,0x047327e4) */
/* WARNING: Removing unreachable block (ram,0x04732804) */
/* WARNING: Removing unreachable block (ram,0x0473282c) */
/* WARNING: Removing unreachable block (ram,0x0473285c) */
/* WARNING: Removing unreachable block (ram,0x04732838) */
/* WARNING: Removing unreachable block (ram,0x04732748) */
/* WARNING: Removing unreachable block (ram,0x04732750) */
/* WARNING: Removing unreachable block (ram,0x04732760) */
/* WARNING: Removing unreachable block (ram,0x04732768) */
/* WARNING: Removing unreachable block (ram,0x04732790) */
/* WARNING: Removing unreachable block (ram,0x04732774) */
/* WARNING: Removing unreachable block (ram,0x04732780) */
/* WARNING: Removing unreachable block (ram,0x0473279c) */
/* WARNING: Removing unreachable block (ram,0x047327a8) */
/* WARNING: Removing unreachable block (ram,0x047327f8) */
/* WARNING: Removing unreachable block (ram,0x047327ac) */
/* WARNING: Removing unreachable block (ram,0x047327b4) */
/* WARNING: Removing unreachable block (ram,0x047327b8) */
/* WARNING: Removing unreachable block (ram,0x04732800) */
/* WARNING: Removing unreachable block (ram,0x047327bc) */
/* WARNING: Removing unreachable block (ram,0x047326c8) */
/* WARNING: Removing unreachable block (ram,0x047326d8) */
/* WARNING: Removing unreachable block (ram,0x047326e0) */
/* WARNING: Removing unreachable block (ram,0x04732708) */
/* WARNING: Removing unreachable block (ram,0x047326ec) */
/* WARNING: Removing unreachable block (ram,0x047326f8) */
/* WARNING: Removing unreachable block (ram,0x04732714) */
/* WARNING: Removing unreachable block (ram,0x04732720) */
/* WARNING: Removing unreachable block (ram,0x04732724) */
/* WARNING: Removing unreachable block (ram,0x0473272c) */
/* WARNING: Removing unreachable block (ram,0x04732730) */
/* WARNING: Removing unreachable block (ram,0x04732734) */
/* WARNING: Removing unreachable block (ram,0x04732738) */
/* WARNING: Removing unreachable block (ram,0x04732520) */
/* WARNING: Removing unreachable block (ram,0x0473249c) */
/* WARNING: Removing unreachable block (ram,0x0473221c) */
/* WARNING: Removing unreachable block (ram,0x04732198) */
/* WARNING: Removing unreachable block (ram,0x04731f18) */
/* WARNING: Removing unreachable block (ram,0x04731ea8) */
/* WARNING: Removing unreachable block (ram,0x026eb294) */
/* WARNING: Removing unreachable block (ram,0x026eafd0) */
/* WARNING: Removing unreachable block (ram,0x026eafe0) */
/* WARNING: Removing unreachable block (ram,0x026eafec) */
/* WARNING: Removing unreachable block (ram,0x026eaff8) */
/* WARNING: Removing unreachable block (ram,0x026eb000) */
/* WARNING: Removing unreachable block (ram,0x026eb028) */
/* WARNING: Removing unreachable block (ram,0x026eb00c) */
/* WARNING: Removing unreachable block (ram,0x026eb018) */
/* WARNING: Removing unreachable block (ram,0x026eb034) */
/* WARNING: Removing unreachable block (ram,0x026eb058) */
/* WARNING: Removing unreachable block (ram,0x026eb2d8) */
/* WARNING: Removing unreachable block (ram,0x026eb2ec) */
/* WARNING: Removing unreachable block (ram,0x026eb060) */
/* WARNING: Removing unreachable block (ram,0x026eb070) */
/* WARNING: Removing unreachable block (ram,0x026eb078) */
/* WARNING: Removing unreachable block (ram,0x026eb0a0) */
/* WARNING: Removing unreachable block (ram,0x026eb084) */
/* WARNING: Removing unreachable block (ram,0x026eb090) */
/* WARNING: Removing unreachable block (ram,0x026eb0ac) */
/* WARNING: Removing unreachable block (ram,0x026eb1d0) */
/* WARNING: Removing unreachable block (ram,0x026eb0bc) */
/* WARNING: Removing unreachable block (ram,0x026eb2f0) */
/* WARNING: Removing unreachable block (ram,0x026eb304) */
/* WARNING: Removing unreachable block (ram,0x026eb0c4) */
/* WARNING: Removing unreachable block (ram,0x026eb0d8) */
/* WARNING: Removing unreachable block (ram,0x026eb0e4) */
/* WARNING: Removing unreachable block (ram,0x026eb0f0) */
/* WARNING: Removing unreachable block (ram,0x026eb0f8) */
/* WARNING: Removing unreachable block (ram,0x026eb120) */
/* WARNING: Removing unreachable block (ram,0x026eb104) */
/* WARNING: Removing unreachable block (ram,0x026eb110) */
/* WARNING: Removing unreachable block (ram,0x026eb12c) */
/* WARNING: Removing unreachable block (ram,0x026eb17c) */
/* WARNING: Removing unreachable block (ram,0x026eb180) */
/* WARNING: Removing unreachable block (ram,0x026eb19c) */
/* WARNING: Removing unreachable block (ram,0x026eb1c8) */
/* WARNING: Removing unreachable block (ram,0x026eaf98) */
/* WARNING: Removing unreachable block (ram,0x026eb308) */
/* WARNING: Removing unreachable block (ram,0x026eafbc) */
/* WARNING: Removing unreachable block (ram,0x026eb314) */
/* WARNING: Removing unreachable block (ram,0x026eb31c) */
/* WARNING: Removing unreachable block (ram,0x026eb334) */
/* WARNING: Removing unreachable block (ram,0x026eb33c) */
/* WARNING: Removing unreachable block (ram,0x026eb344) */
/* WARNING: Removing unreachable block (ram,0x026eb358) */
/* WARNING: Removing unreachable block (ram,0x026eb360) */
/* WARNING: Removing unreachable block (ram,0x026eb378) */
/* WARNING: Removing unreachable block (ram,0x026eb380) */
/* WARNING: Removing unreachable block (ram,0x026eb39c) */
/* WARNING: Removing unreachable block (ram,0x026eb3c0) */
/* WARNING: Removing unreachable block (ram,0x026eb3ec) */
/* WARNING: Removing unreachable block (ram,0x026eb408) */
/* WARNING: Removing unreachable block (ram,0x026eb430) */
/* WARNING: Removing unreachable block (ram,0x026eb438) */
/* WARNING: Removing unreachable block (ram,0x026eb458) */
/* WARNING: Removing unreachable block (ram,0x026eb43c) */
/* WARNING: Removing unreachable block (ram,0x026eb474) */
/* WARNING: Removing unreachable block (ram,0x026eb494) */
/* WARNING: Removing unreachable block (ram,0x026eb4a0) */
/* WARNING: Removing unreachable block (ram,0x026eb4b0) */
/* WARNING: Removing unreachable block (ram,0x026eb4b4) */
/* WARNING: Removing unreachable block (ram,0x026eb51c) */
/* WARNING: Removing unreachable block (ram,0x026eb53c) */
/* WARNING: Removing unreachable block (ram,0x026eb544) */
/* WARNING: Removing unreachable block (ram,0x026eb568) */
/* WARNING: Removing unreachable block (ram,0x026eb548) */
/* WARNING: Removing unreachable block (ram,0x026eb574) */
/* WARNING: Removing unreachable block (ram,0x026eb57c) */
/* WARNING: Removing unreachable block (ram,0x026eb54c) */
/* WARNING: Removing unreachable block (ram,0x026eb590) */
/* WARNING: Removing unreachable block (ram,0x026eb5b0) */
/* WARNING: Removing unreachable block (ram,0x026eb5bc) */
/* WARNING: Removing unreachable block (ram,0x026eb5cc) */
/* WARNING: Removing unreachable block (ram,0x026eb5d0) */
/* WARNING: Removing unreachable block (ram,0x026eb638) */
/* WARNING: Removing unreachable block (ram,0x026eb654) */
/* WARNING: Removing unreachable block (ram,0x026eb664) */
/* WARNING: Removing unreachable block (ram,0x026eb5ec) */
/* WARNING: Removing unreachable block (ram,0x026eb4d0) */
/* WARNING: Removing unreachable block (ram,0x026eb3c8) */
/* WARNING: Removing unreachable block (ram,0x026eb1dc) */
/* WARNING: Removing unreachable block (ram,0x026eb1e4) */
/* WARNING: Removing unreachable block (ram,0x026eb1fc) */
/* WARNING: Removing unreachable block (ram,0x026eb204) */
/* WARNING: Removing unreachable block (ram,0x026eb22c) */
/* WARNING: Removing unreachable block (ram,0x026eb210) */
/* WARNING: Removing unreachable block (ram,0x026eb21c) */
/* WARNING: Removing unreachable block (ram,0x026eb238) */
/* WARNING: Removing unreachable block (ram,0x026eb244) */
/* WARNING: Removing unreachable block (ram,0x026eb248) */
/* WARNING: Removing unreachable block (ram,0x026eb250) */
/* WARNING: Removing unreachable block (ram,0x026eb254) */
/* WARNING: Removing unreachable block (ram,0x026eb284) */
/* WARNING: Removing unreachable block (ram,0x026eb258) */
/* WARNING: Removing unreachable block (ram,0x026eb260) */
/* WARNING: Removing unreachable block (ram,0x026eb2a4) */
/* WARNING: Removing unreachable block (ram,0x026eb2b8) */
/* WARNING: Removing unreachable block (ram,0x026eafc0) */
/* WARNING: Removing unreachable block (ram,0x026eaa3c) */
/* WARNING: Removing unreachable block (ram,0x026eaa5c) */
/* WARNING: Removing unreachable block (ram,0x026ea904) */
/* WARNING: Removing unreachable block (ram,0x026eadfc) */
/* WARNING: Removing unreachable block (ram,0x026eae18) */
/* WARNING: Removing unreachable block (ram,0x026ea928) */
/* WARNING: Removing unreachable block (ram,0x026ea938) */
/* WARNING: Removing unreachable block (ram,0x026ea944) */
/* WARNING: Removing unreachable block (ram,0x026ea9b0) */
/* WARNING: Removing unreachable block (ram,0x026ea9c0) */
/* WARNING: Removing unreachable block (ram,0x026ea9cc) */
/* WARNING: Removing unreachable block (ram,0x026ea9d8) */
/* WARNING: Removing unreachable block (ram,0x026ea9e0) */
/* WARNING: Removing unreachable block (ram,0x026eaae8) */
/* WARNING: Removing unreachable block (ram,0x026ea9ec) */
/* WARNING: Removing unreachable block (ram,0x026ea9f8) */
/* WARNING: Removing unreachable block (ram,0x026eaaf4) */
/* WARNING: Removing unreachable block (ram,0x026eab10) */
/* WARNING: Removing unreachable block (ram,0x026eab2c) */
/* WARNING: Removing unreachable block (ram,0x026eab34) */
/* WARNING: Removing unreachable block (ram,0x026eab5c) */
/* WARNING: Removing unreachable block (ram,0x026eab40) */
/* WARNING: Removing unreachable block (ram,0x026eab4c) */
/* WARNING: Removing unreachable block (ram,0x026eab68) */
/* WARNING: Removing unreachable block (ram,0x026eabdc) */
/* WARNING: Removing unreachable block (ram,0x026eab78) */
/* WARNING: Removing unreachable block (ram,0x026eab80) */
/* WARNING: Removing unreachable block (ram,0x026eab94) */
/* WARNING: Removing unreachable block (ram,0x026eaba0) */
/* WARNING: Removing unreachable block (ram,0x026eabac) */
/* WARNING: Removing unreachable block (ram,0x026eabb4) */
/* WARNING: Removing unreachable block (ram,0x026eac3c) */
/* WARNING: Removing unreachable block (ram,0x026eabc0) */
/* WARNING: Removing unreachable block (ram,0x026eabcc) */
/* WARNING: Removing unreachable block (ram,0x026eac48) */
/* WARNING: Removing unreachable block (ram,0x026eac7c) */
/* WARNING: Removing unreachable block (ram,0x026eac8c) */
/* WARNING: Removing unreachable block (ram,0x026eac94) */
/* WARNING: Removing unreachable block (ram,0x026eacbc) */
/* WARNING: Removing unreachable block (ram,0x026eaca0) */
/* WARNING: Removing unreachable block (ram,0x026eacac) */
/* WARNING: Removing unreachable block (ram,0x026eacc8) */
/* WARNING: Removing unreachable block (ram,0x026eace4) */
/* WARNING: Removing unreachable block (ram,0x026eacd8) */
/* WARNING: Removing unreachable block (ram,0x026ea954) */
/* WARNING: Removing unreachable block (ram,0x026ea968) */
/* WARNING: Removing unreachable block (ram,0x026ea974) */
/* WARNING: Removing unreachable block (ram,0x026ea980) */
/* WARNING: Removing unreachable block (ram,0x026ea988) */
/* WARNING: Removing unreachable block (ram,0x026eaa08) */
/* WARNING: Removing unreachable block (ram,0x026ea994) */
/* WARNING: Removing unreachable block (ram,0x026ea9a0) */
/* WARNING: Removing unreachable block (ram,0x026eaa14) */
/* WARNING: Removing unreachable block (ram,0x026eaa88) */
/* WARNING: Removing unreachable block (ram,0x026eaa9c) */
/* WARNING: Removing unreachable block (ram,0x026eaaa8) */
/* WARNING: Removing unreachable block (ram,0x026eaab8) */
/* WARNING: Removing unreachable block (ram,0x026eaac0) */
/* WARNING: Removing unreachable block (ram,0x026eac00) */
/* WARNING: Removing unreachable block (ram,0x026eaacc) */
/* WARNING: Removing unreachable block (ram,0x026eaad8) */
/* WARNING: Removing unreachable block (ram,0x026eac0c) */
/* WARNING: Removing unreachable block (ram,0x026eaa28) */
/* WARNING: Removing unreachable block (ram,0x026eaa2c) */
/* WARNING: Removing unreachable block (ram,0x026ea434) */
/* WARNING: Removing unreachable block (ram,0x026ea444) */
/* WARNING: Removing unreachable block (ram,0x026ea450) */
/* WARNING: Removing unreachable block (ram,0x026ea45c) */
/* WARNING: Removing unreachable block (ram,0x026ea464) */
/* WARNING: Removing unreachable block (ram,0x026ea48c) */
/* WARNING: Removing unreachable block (ram,0x026ea470) */
/* WARNING: Removing unreachable block (ram,0x026ea47c) */
/* WARNING: Removing unreachable block (ram,0x026ea498) */
/* WARNING: Removing unreachable block (ram,0x026ea4bc) */
/* WARNING: Removing unreachable block (ram,0x026ea714) */
/* WARNING: Removing unreachable block (ram,0x026ea728) */
/* WARNING: Removing unreachable block (ram,0x026ea4c4) */
/* WARNING: Removing unreachable block (ram,0x026ea4d4) */
/* WARNING: Removing unreachable block (ram,0x026ea4dc) */
/* WARNING: Removing unreachable block (ram,0x026ea504) */
/* WARNING: Removing unreachable block (ram,0x026ea4e8) */
/* WARNING: Removing unreachable block (ram,0x026ea4f4) */
/* WARNING: Removing unreachable block (ram,0x026ea510) */
/* WARNING: Removing unreachable block (ram,0x026ea634) */
/* WARNING: Removing unreachable block (ram,0x026ea520) */
/* WARNING: Removing unreachable block (ram,0x026ea72c) */
/* WARNING: Removing unreachable block (ram,0x026ea740) */
/* WARNING: Removing unreachable block (ram,0x026ea528) */
/* WARNING: Removing unreachable block (ram,0x026ea53c) */
/* WARNING: Removing unreachable block (ram,0x026ea548) */
/* WARNING: Removing unreachable block (ram,0x026ea554) */
/* WARNING: Removing unreachable block (ram,0x026ea55c) */
/* WARNING: Removing unreachable block (ram,0x026ea584) */
/* WARNING: Removing unreachable block (ram,0x026ea568) */
/* WARNING: Removing unreachable block (ram,0x026ea574) */
/* WARNING: Removing unreachable block (ram,0x026ea590) */
/* WARNING: Removing unreachable block (ram,0x026ea5e0) */
/* WARNING: Removing unreachable block (ram,0x026ea5e4) */
/* WARNING: Removing unreachable block (ram,0x026ea600) */
/* WARNING: Removing unreachable block (ram,0x026ea62c) */
/* WARNING: Removing unreachable block (ram,0x026ea3fc) */
/* WARNING: Removing unreachable block (ram,0x026ea754) */
/* WARNING: Removing unreachable block (ram,0x026ea420) */
/* WARNING: Removing unreachable block (ram,0x026ea760) */
/* WARNING: Removing unreachable block (ram,0x026ea768) */
/* WARNING: Removing unreachable block (ram,0x026ea780) */
/* WARNING: Removing unreachable block (ram,0x026ea7e0) */
/* WARNING: Removing unreachable block (ram,0x026ea808) */
/* WARNING: Removing unreachable block (ram,0x026ea834) */
/* WARNING: Removing unreachable block (ram,0x026ea850) */
/* WARNING: Removing unreachable block (ram,0x026ea810) */
/* WARNING: Removing unreachable block (ram,0x026ea640) */
/* WARNING: Removing unreachable block (ram,0x026ea648) */
/* WARNING: Removing unreachable block (ram,0x026ea660) */
/* WARNING: Removing unreachable block (ram,0x026ea668) */
/* WARNING: Removing unreachable block (ram,0x026ea690) */
/* WARNING: Removing unreachable block (ram,0x026ea674) */
/* WARNING: Removing unreachable block (ram,0x026ea680) */
/* WARNING: Removing unreachable block (ram,0x026ea69c) */
/* WARNING: Removing unreachable block (ram,0x026ea6a8) */
/* WARNING: Removing unreachable block (ram,0x026ea78c) */
/* WARNING: Removing unreachable block (ram,0x026ea7a0) */
/* WARNING: Removing unreachable block (ram,0x026ea7a8) */
/* WARNING: Removing unreachable block (ram,0x026ea7c0) */
/* WARNING: Removing unreachable block (ram,0x026ea6ac) */
/* WARNING: Removing unreachable block (ram,0x026ea6b4) */
/* WARNING: Removing unreachable block (ram,0x026ea6b8) */
/* WARNING: Removing unreachable block (ram,0x026ea744) */
/* WARNING: Removing unreachable block (ram,0x026ea7c8) */
/* WARNING: Removing unreachable block (ram,0x026ea74c) */
/* WARNING: Removing unreachable block (ram,0x026ea7cc) */
/* WARNING: Removing unreachable block (ram,0x026ea6c0) */
/* WARNING: Removing unreachable block (ram,0x026ea6e0) */
/* WARNING: Removing unreachable block (ram,0x026ea858) */
/* WARNING: Removing unreachable block (ram,0x026ea8a0) */
/* WARNING: Removing unreachable block (ram,0x026ea8c0) */
/* WARNING: Removing unreachable block (ram,0x026ea8cc) */
/* WARNING: Removing unreachable block (ram,0x026ea6f4) */
/* WARNING: Removing unreachable block (ram,0x026ea424) */
/* WARNING: Removing unreachable block (ram,0x026e9dac) */
/* WARNING: Removing unreachable block (ram,0x026ea220) */
/* WARNING: Removing unreachable block (ram,0x026ea23c) */
/* WARNING: Removing unreachable block (ram,0x026e9dcc) */
/* WARNING: Removing unreachable block (ram,0x026e9ddc) */
/* WARNING: Removing unreachable block (ram,0x026e9de8) */
/* WARNING: Removing unreachable block (ram,0x026e9e54) */
/* WARNING: Removing unreachable block (ram,0x026e9e64) */
/* WARNING: Removing unreachable block (ram,0x026e9e70) */
/* WARNING: Removing unreachable block (ram,0x026e9e7c) */
/* WARNING: Removing unreachable block (ram,0x026e9e84) */
/* WARNING: Removing unreachable block (ram,0x026e9f60) */
/* WARNING: Removing unreachable block (ram,0x026e9e90) */
/* WARNING: Removing unreachable block (ram,0x026e9e9c) */
/* WARNING: Removing unreachable block (ram,0x026e9f6c) */
/* WARNING: Removing unreachable block (ram,0x026e9f88) */
/* WARNING: Removing unreachable block (ram,0x026e9fa4) */
/* WARNING: Removing unreachable block (ram,0x026e9fac) */
/* WARNING: Removing unreachable block (ram,0x026e9fd4) */
/* WARNING: Removing unreachable block (ram,0x026e9fb8) */
/* WARNING: Removing unreachable block (ram,0x026e9fc4) */
/* WARNING: Removing unreachable block (ram,0x026e9fe0) */
/* WARNING: Removing unreachable block (ram,0x026e9ff0) */
/* WARNING: Removing unreachable block (ram,0x026e9ff8) */
/* WARNING: Removing unreachable block (ram,0x026ea00c) */
/* WARNING: Removing unreachable block (ram,0x026ea018) */
/* WARNING: Removing unreachable block (ram,0x026ea024) */
/* WARNING: Removing unreachable block (ram,0x026ea02c) */
/* WARNING: Removing unreachable block (ram,0x026ea054) */
/* WARNING: Removing unreachable block (ram,0x026ea038) */
/* WARNING: Removing unreachable block (ram,0x026ea044) */
/* WARNING: Removing unreachable block (ram,0x026ea060) */
/* WARNING: Removing unreachable block (ram,0x026ea094) */
/* WARNING: Removing unreachable block (ram,0x026ea0a4) */
/* WARNING: Removing unreachable block (ram,0x026ea0ac) */
/* WARNING: Removing unreachable block (ram,0x026ea0d4) */
/* WARNING: Removing unreachable block (ram,0x026ea0b8) */
/* WARNING: Removing unreachable block (ram,0x026ea0c4) */
/* WARNING: Removing unreachable block (ram,0x026ea0e0) */
/* WARNING: Removing unreachable block (ram,0x026ea0fc) */
/* WARNING: Removing unreachable block (ram,0x026ea0f0) */
/* WARNING: Removing unreachable block (ram,0x026ea124) */
/* WARNING: Removing unreachable block (ram,0x026e9df8) */
/* WARNING: Removing unreachable block (ram,0x026e9e0c) */
/* WARNING: Removing unreachable block (ram,0x026e9e18) */
/* WARNING: Removing unreachable block (ram,0x026e9e24) */
/* WARNING: Removing unreachable block (ram,0x026e9e2c) */
/* WARNING: Removing unreachable block (ram,0x026e9eac) */
/* WARNING: Removing unreachable block (ram,0x026e9e38) */
/* WARNING: Removing unreachable block (ram,0x026e9e44) */
/* WARNING: Removing unreachable block (ram,0x026e9eb8) */
/* WARNING: Removing unreachable block (ram,0x026ea200) */
/* WARNING: Removing unreachable block (ram,0x026ea204) */
/* WARNING: Removing unreachable block (ram,0x026ea214) */
/* WARNING: Removing unreachable block (ram,0x026ea260) */
/* WARNING: Removing unreachable block (ram,0x026ea268) */
/* WARNING: Removing unreachable block (ram,0x026ea278) */
/* WARNING: Removing unreachable block (ram,0x026ea27c) */
/* WARNING: Removing unreachable block (ram,0x026ea28c) */
/* WARNING: Removing unreachable block (ram,0x026ea294) */
/* WARNING: Removing unreachable block (ram,0x026ea2ac) */
/* WARNING: Removing unreachable block (ram,0x026ea2b4) */
/* WARNING: Removing unreachable block (ram,0x026ea2c4) */
/* WARNING: Removing unreachable block (ram,0x026ea2c8) */
/* WARNING: Removing unreachable block (ram,0x026ea2d8) */
/* WARNING: Removing unreachable block (ram,0x026ea2f0) */
/* WARNING: Removing unreachable block (ram,0x026ea320) */
/* WARNING: Removing unreachable block (ram,0x026ea338) */
/* WARNING: Removing unreachable block (ram,0x026ea2fc) */
/* WARNING: Removing unreachable block (ram,0x026ea128) */
/* WARNING: Removing unreachable block (ram,0x026ea130) */
/* WARNING: Removing unreachable block (ram,0x026ea148) */
/* WARNING: Removing unreachable block (ram,0x026ea150) */
/* WARNING: Removing unreachable block (ram,0x026ea178) */
/* WARNING: Removing unreachable block (ram,0x026ea15c) */
/* WARNING: Removing unreachable block (ram,0x026ea168) */
/* WARNING: Removing unreachable block (ram,0x026ea184) */
/* WARNING: Removing unreachable block (ram,0x026ea190) */
/* WARNING: Removing unreachable block (ram,0x026ea194) */
/* WARNING: Removing unreachable block (ram,0x026ea1ac) */
/* WARNING: Removing unreachable block (ram,0x026ea19c) */
/* WARNING: Removing unreachable block (ram,0x026ea1a4) */
/* WARNING: Removing unreachable block (ram,0x026ea1a8) */
/* WARNING: Removing unreachable block (ram,0x026ea248) */
/* WARNING: Removing unreachable block (ram,0x026e9ecc) */
/* WARNING: Removing unreachable block (ram,0x026e9ee0) */
/* WARNING: Removing unreachable block (ram,0x026e9eec) */
/* WARNING: Removing unreachable block (ram,0x026e9efc) */
/* WARNING: Removing unreachable block (ram,0x026e9f04) */
/* WARNING: Removing unreachable block (ram,0x026e9f2c) */
/* WARNING: Removing unreachable block (ram,0x026e9f10) */
/* WARNING: Removing unreachable block (ram,0x026e9f1c) */
/* WARNING: Removing unreachable block (ram,0x026e9f38) */
/* WARNING: Removing unreachable block (ram,0x026ea1c0) */
/* WARNING: Removing unreachable block (ram,0x026ea1d0) */
/* WARNING: Removing unreachable block (ram,0x026ea340) */
/* WARNING: Removing unreachable block (ram,0x026ea38c) */
/* WARNING: Removing unreachable block (ram,0x026ea3ac) */
/* WARNING: Removing unreachable block (ram,0x026ea3b8) */
/* WARNING: Removing unreachable block (ram,0x026ea1e0) */
/* WARNING: Removing unreachable block (ram,0x026eabec) */
/* WARNING: Removing unreachable block (ram,0x026ead04) */
/* WARNING: Removing unreachable block (ram,0x026ead0c) */
/* WARNING: Removing unreachable block (ram,0x026ead10) */
/* WARNING: Removing unreachable block (ram,0x026ead18) */
/* WARNING: Removing unreachable block (ram,0x026ead30) */
/* WARNING: Removing unreachable block (ram,0x026ead38) */
/* WARNING: Removing unreachable block (ram,0x026ead60) */
/* WARNING: Removing unreachable block (ram,0x026ead44) */
/* WARNING: Removing unreachable block (ram,0x026ead50) */
/* WARNING: Removing unreachable block (ram,0x026ead6c) */
/* WARNING: Removing unreachable block (ram,0x026ead78) */
/* WARNING: Removing unreachable block (ram,0x026ead7c) */
/* WARNING: Removing unreachable block (ram,0x026eadac) */
/* WARNING: Removing unreachable block (ram,0x026eadc4) */
/* WARNING: Removing unreachable block (ram,0x026ead84) */
/* WARNING: Removing unreachable block (ram,0x026ead8c) */
/* WARNING: Removing unreachable block (ram,0x026eadcc) */
/* WARNING: Removing unreachable block (ram,0x026eaddc) */
/* WARNING: Removing unreachable block (ram,0x026ead90) */
/* WARNING: Removing unreachable block (ram,0x026eae20) */
/* WARNING: Removing unreachable block (ram,0x026eae28) */
/* WARNING: Removing unreachable block (ram,0x026eae38) */
/* WARNING: Removing unreachable block (ram,0x026eae3c) */
/* WARNING: Removing unreachable block (ram,0x026eae4c) */
/* WARNING: Removing unreachable block (ram,0x026eae54) */
/* WARNING: Removing unreachable block (ram,0x026eae64) */
/* WARNING: Removing unreachable block (ram,0x026eae68) */
/* WARNING: Removing unreachable block (ram,0x026eae78) */
/* WARNING: Removing unreachable block (ram,0x026eae8c) */
/* WARNING: Removing unreachable block (ram,0x026eaebc) */
/* WARNING: Removing unreachable block (ram,0x026eaed4) */
/* WARNING: Removing unreachable block (ram,0x026eae98) */
/* WARNING: Removing unreachable block (ram,0x026eada8) */
/* WARNING: Removing unreachable block (ram,0x026eaedc) */
/* WARNING: Removing unreachable block (ram,0x026eaf28) */
/* WARNING: Removing unreachable block (ram,0x026eaf48) */
/* WARNING: Removing unreachable block (ram,0x026eaf54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_03786960(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                   long *param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  code *pcVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  undefined *puVar35;
  long *unaff_x27;
  undefined8 unaff_x29;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  char acStack_35c [276];
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  undefined8 uStack_1b8;
  undefined8 auStack_160 [2];
  undefined1 auStack_150 [80];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  undefined1 auStack_a0 [80];
  
  auVar36._8_8_ = param_1;
  auVar36._0_8_ = param_3;
  puVar7 = auStack_160;
  puVar35 = &DAT_059db250;
  plVar32 = param_3;
  plVar12 = param_4;
  plVar18 = param_5;
  plVar23 = param_6;
  plStack_a8 = param_3;
  if ((bRam0000000005e2dfb4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2dfb4 = 1;
  }
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar14 = func_0x0376edd4(&plStack_a8);
  plVar34 = (long *)0x0;
  if ((param_4 == (long *)0x0) || ((uVar14 & 1) != 0)) {
    return (long *)0x0;
  }
  if (param_2 != (long *)0x0) {
    lVar26 = *param_2;
    puVar35 = &DAT_059e0220;
    uVar14 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar14 != 0) {
      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar15 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0xc) * 0x10 + 0x138);
          goto LAB_03786a6c;
        }
        uVar14 = uVar14 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar14 != 0);
    }
    puVar15 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0xc);
LAB_03786a6c:
    uVar16 = (*(code *)*puVar15)(param_2,puVar15[1]);
    func_0x037789bc(param_1,param_2,param_3,uVar16,1);
    uVar16 = func_0x0249fb80(_DAT_059de230);
    func_0x034a1008(uVar16,param_2,0);
    lVar26 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar14 != 0) {
      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar15 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0xc) * 0x10 + 0x138);
          goto LAB_03786b00;
        }
        uVar14 = uVar14 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar14 != 0);
    }
    puVar15 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0xc);
LAB_03786b00:
    uVar17 = (*(code *)*puVar15)(param_2,puVar15[1]);
    plVar34 = (long *)func_0x03774f00(param_1,param_2,param_3,param_4,uVar16,uVar17,2,0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    plVar18 = (long *)func_0x03530158(param_5,0);
    plVar23 = (long *)0x0;
    auStack_160[0] = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    plVar12 = param_3;
    func_0x034ba910(&uStack_100,6);
    lVar26 = _DAT_059c9978;
    plVar32 = param_3;
    if (param_6 != (long *)0x0) {
      func_0x054ed0d0(auStack_150,&uStack_100,0x50);
      lVar27 = *param_6;
      uVar14 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar14 != 0) {
        piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == lVar26) {
            puVar15 = (undefined8 *)(lVar27 + (long)(*piVar29 + 2) * 0x10 + 0x138);
            goto LAB_03786c08;
          }
          uVar14 = uVar14 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar14 != 0);
      }
      puVar15 = (undefined8 *)func_0x024d927c(param_6,lVar26,2);
LAB_03786c08:
      pcVar30 = (code *)*puVar15;
      func_0x054ed0d0(auStack_a0,auStack_150,0x50);
      (*pcVar30)(param_6,auStack_a0,puVar15[1]);
      return plVar34;
    }
  }
  auVar40 = func_0x0249fb90();
  uVar16 = auVar40._0_8_;
  uStack_1b8 = 0x3786c50;
  plVar19 = plVar32;
  plVar31 = plVar12;
  plVar21 = plVar18;
  if ((bRam0000000005e2dfb5 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a42ca8);
    func_0x0249f8e4(&DAT_05a44708);
    func_0x0249f8e4(&DAT_059c59b8);
    func_0x0249f8e4(&DAT_059c59a8);
    func_0x0249f8e4(&DAT_05a6a1e0);
    func_0x0249f8e4(&DAT_05a6a1e8);
    func_0x0249f8e4(&DAT_059efeb8);
    bRam0000000005e2dfb5 = 1;
  }
  lVar26 = func_0x0249fb80(_DAT_059efeb8);
  func_0x037c52dc(lVar26,0);
  if (lVar26 == 0) {
    uVar16 = func_0x0249fb90();
    if ((bRam0000000005e2dfb6 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a42ca8);
      func_0x0249f8e4(&DAT_05a44708);
      func_0x0249f8e4(&DAT_059c59b8);
      func_0x0249f8e4(&DAT_059c59a8);
      func_0x0249f8e4(&DAT_05a6a1f0);
      func_0x0249f8e4(&DAT_05a6a1f8);
      func_0x0249f8e4(&DAT_059efec0);
      bRam0000000005e2dfb6 = 1;
    }
    lVar26 = func_0x0249fb80(_DAT_059efec0);
    func_0x037c53b0(lVar26,0);
    if (lVar26 == 0) {
      auVar36 = func_0x0249fb90();
      plVar32 = auVar36._8_8_;
      plStack_240 = plVar31;
      plStack_238 = plVar21;
      uStack_230 = uVar16;
      plStack_228 = plVar19;
      if ((bRam0000000005e2dfb9 & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2ba0);
        func_0x0249f8e4(&DAT_05a2ed08);
        bRam0000000005e2dfb9 = 1;
      }
      lVar26 = *(long *)(auVar36._0_8_ + 0x98);
      while( true ) {
        if (lVar26 == 0) {
          func_0x0249fb90();
          return plVar32;
        }
        plStack_248 = plVar32;
        uVar14 = func_0x028ed1f8(lVar26,&plStack_248,_DAT_05a2ed08);
        if ((uVar14 & 1) == 0) break;
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar26 = *(long *)(auVar36._0_8_ + 0x98);
        plVar32 = (long *)((long)plVar32 + 1);
      }
      return plVar32;
    }
    *(long *)(lVar26 + 0x10) = (long)plVar31;
    func_0x0249f888((long *)(lVar26 + 0x10),plVar31);
    *(long **)(lVar26 + 0x18) = plVar21;
    *(long *)(lVar26 + 0x20) = (long)plVar19;
    func_0x0249f888((long *)(lVar26 + 0x20),plVar19);
    uVar16 = func_0x0376e0dc(uVar16);
    uVar17 = func_0x0249fb80(_DAT_059c59a8);
    func_0x02a9aa34(uVar17,lVar26,_DAT_05a6a1f0,0);
    plVar19 = (long *)func_0x026ec554(uVar16,uVar17,_DAT_05a44708);
    lVar20 = func_0x0249fb80(_DAT_059c59b8);
    lVar27 = 0;
    func_0x02a9aa34(lVar20,lVar26,_DAT_05a6a1f8);
    puVar35 = &DAT_059efeb8;
    puVar7 = (undefined8 *)&stack0xfffffffffffffe40;
    uStack_1b8 = 0x3786e18;
    param_4 = (long *)0x0;
  }
  else {
    *(long *)(lVar26 + 0x10) = (long)plVar12;
    func_0x0249f888((long *)(lVar26 + 0x10),plVar12);
    *(undefined8 *)(lVar26 + 0x18) = uVar16;
    func_0x0249f888((undefined8 *)(lVar26 + 0x18),uVar16);
    *(undefined8 *)(lVar26 + 0x20) = auVar40._8_8_;
    func_0x0249f888((undefined8 *)(lVar26 + 0x20),auVar40._8_8_);
    *(long **)(lVar26 + 0x28) = plVar32;
    *(long *)(lVar26 + 0x30) = (long)plVar23;
    func_0x0249f888((long *)(lVar26 + 0x30),plVar23);
    *(long *)(lVar26 + 0x38) = (long)plVar18;
    func_0x0249f888((long *)(lVar26 + 0x38),plVar18);
    uVar16 = func_0x0376e0dc(uVar16);
    uVar17 = func_0x0249fb80(_DAT_059c59a8);
    func_0x02a9aa34(uVar17,lVar26,_DAT_05a6a1e0,0);
    plVar19 = (long *)func_0x026ec554(uVar16,uVar17,_DAT_05a44708);
    lVar20 = func_0x0249fb80(_DAT_059c59b8);
    lVar27 = 0;
    func_0x02a9aa34(lVar20,lVar26,_DAT_05a6a1e8);
    plVar18 = param_6;
    plVar23 = param_5;
    plVar32 = param_2;
    plVar12 = plVar34;
    auVar40 = auVar36;
  }
  lVar26 = _DAT_05a42ca8;
  *(undefined8 *)((long)puVar7 + -0x30) = uStack_1b8;
  *(long **)((long)puVar7 + -0x28) = plVar32;
  *(long **)((long)puVar7 + -0x20) = param_4;
  *(long **)((long)puVar7 + -0x18) = plVar23;
  *(long *)((long)puVar7 + -0x10) = auVar40._0_8_;
  *(long **)((long)puVar7 + -8) = plVar18;
  lVar22 = _DAT_05a42ca8;
  if (*(long *)(_DAT_05a42ca8 + 0x38) == 0) {
    func_0x024d8f9c(_DAT_05a42ca8);
  }
  if (plVar19 == (long *)0x0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026e9198:
    uVar16 = func_0x0249f8f8(puVar13);
    uVar16 = func_0x04730fcc(uVar16,0);
    func_0x0249fa54(uVar16,lVar26);
LAB_026e91ac:
    func_0x0249ff10(plVar19);
  }
  else {
    if (lVar20 == 0) {
      puVar13 = &DAT_05ab5d58;
      goto LAB_026e9198;
    }
    lVar11 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x024d8f40();
    }
    lVar25 = *plVar19;
    bVar1 = *(byte *)(lVar25 + 0x130);
    if (*(byte *)(lVar11 + 0x130) <= bVar1) {
      lVar28 = *(long *)(lVar26 + 0x38);
      if (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11)
      goto LAB_026e8f18;
      lVar11 = *(long *)(lVar28 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40(lVar11);
        lVar25 = *plVar19;
        bVar1 = *(byte *)(lVar25 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
        lVar26 = *(long *)(*(long *)(lVar26 + 0x38) + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x024d8f40(lVar11);
          lVar25 = *plVar19;
          bVar1 = *(byte *)(lVar25 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
           )) {
          lVar26 = func_0x0249fa60(*(undefined8 *)
                                    (lVar25 + (ulong)*(ushort *)(lVar26 + 0x50) * 0x10 + 0x140),
                                   lVar26);
                    /* WARNING: Could not recover jumptable at 0x026e909c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar32 = (long *)(**(code **)(lVar26 + 8))(plVar19,lVar20,lVar26);
          return plVar32;
        }
      }
      goto LAB_026e91ac;
    }
    lVar28 = *(long *)(lVar26 + 0x38);
LAB_026e8f18:
    lVar11 = *(long *)(lVar28 + 0x28);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x024d8f40(lVar11);
    }
    lVar11 = func_0x0249fa68(plVar19,lVar11);
    if (lVar11 == 0) {
      lVar11 = *(long *)(*(long *)(lVar26 + 0x38) + 0x48);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40();
      }
      if (*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar11 + 0x130)) {
        lVar25 = *(long *)(lVar26 + 0x38);
LAB_026e90b8:
        if ((*(ushort *)(*(long *)(lVar25 + 0x60) + 0x135) & 1) == 0) {
          func_0x024d8f40();
        }
        plVar32 = (long *)func_0x0249fb80();
        func_0x029a85c0(plVar32,plVar19,0,lVar20,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x68));
        return plVar32;
      }
      lVar25 = *(long *)(lVar26 + 0x38);
      if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         ) goto LAB_026e90b8;
      if ((*(ushort *)(*(long *)(lVar25 + 0x50) + 0x135) & 1) == 0) {
        func_0x024d8f40();
      }
      param_4 = (long *)func_0x0249fb80();
      lVar11 = *(long *)(*(long *)(lVar26 + 0x38) + 0x48);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40(lVar11);
      }
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar19 + 0x130)) &&
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
         )) {
        func_0x029a8d1c(param_4,plVar19,0,lVar20,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x58));
        return param_4;
      }
      goto LAB_026e91ac;
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar26 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    param_4 = (long *)func_0x0249fb80();
    plVar32 = *(long **)(*(long *)(lVar26 + 0x38) + 0x28);
    if ((*(ushort *)((long)plVar32 + 0x135) & 1) == 0) {
      plVar32 = (long *)func_0x024d8f40(plVar32);
    }
    lVar11 = func_0x0249fa68(plVar19,plVar32);
    if (lVar11 != 0) {
      func_0x029a80a8(param_4,lVar11,0,lVar20,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x38));
      return param_4;
    }
  }
  auVar36 = func_0x0249ff10(plVar19,plVar32);
  puVar8 = (undefined1 *)((long)puVar7 + -0x50);
  *(undefined8 *)((long)puVar7 + -0x50) = 0x26e91c0;
  *(long *)((long)puVar7 + -0x48) = lVar26;
  *(long **)((long)puVar7 + -0x40) = plVar19;
  *(long *)((long)puVar7 + -0x38) = lVar20;
  lVar26 = lVar22;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x024d8f9c(lVar22);
  }
  if (auVar36._0_8_ == 0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026e921c:
    uVar16 = func_0x0249f8f8(puVar13);
    uVar17 = func_0x04730fcc(uVar16,0);
    uVar16 = 0x26e9230;
    auVar38 = func_0x0249fa54(uVar17,lVar22);
  }
  else {
    if (auVar36._8_8_ == 0) {
      puVar13 = &DAT_05ab5d58;
      goto LAB_026e921c;
    }
    plVar18 = (long *)(lVar22 + 0x38);
    lVar22 = *(long *)((long)puVar7 + -0x38);
    lVar26 = *(long *)(*plVar18 + 0x10);
    puVar8 = (undefined1 *)((long)puVar7 + -0x30);
    uVar16 = *(undefined8 *)((long)puVar7 + -0x50);
    auVar38 = auVar36;
    auVar36 = *(undefined1 (*) [16])((long)puVar7 + -0x48);
  }
  *(undefined8 *)(puVar8 + -0x30) = uVar16;
  *(long **)(puVar8 + -0x20) = param_4;
  *(undefined1 (*) [16])(puVar8 + -0x18) = auVar36;
  *(long *)(puVar8 + -8) = lVar22;
  plVar18 = *(long **)(lVar26 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x024d8f9c(lVar26);
    plVar18 = *(long **)(lVar26 + 0x38);
  }
  if ((*(ushort *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  plVar18 = (long *)func_0x0249fb80();
  lVar20 = *(long *)(*(long *)(lVar26 + 0x38) + 8);
  func_0x02806980(plVar18,0xfffffffe);
  if (plVar18 != (long *)0x0) {
    func_0x022be0d8(plVar18,*(long *)(**(long **)(lVar26 + 0x38) + 0x80) + 0x80,auVar38._0_8_);
    func_0x022be0d8(plVar18,*(long *)(**(long **)(lVar26 + 0x38) + 0x80) + 0xc0,auVar38._8_8_);
    return plVar18;
  }
  auVar37 = func_0x0249fb90();
  *(undefined8 *)(puVar8 + -0x50) = 0x26e92dc;
  *(long *)(puVar8 + -0x48) = auVar38._0_8_;
  *(long *)(puVar8 + -0x40) = lVar26;
  *(long *)(puVar8 + -0x38) = auVar38._8_8_;
  lVar26 = lVar20;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x024d8f9c(lVar20);
  }
  if (auVar37._0_8_ == 0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026e9338:
    uVar16 = func_0x0249f8f8(puVar13);
    uVar16 = func_0x04730fcc(uVar16,0);
    auVar38 = func_0x0249fa54(uVar16,lVar20);
    puVar9 = puVar8 + -0x80;
    *(undefined8 *)(puVar8 + -0x80) = 0x26e934c;
    *(undefined8 *)(puVar8 + -0x70) = 0;
    *(undefined1 (*) [16])(puVar8 + -0x68) = auVar37;
    *(long *)(puVar8 + -0x58) = lVar20;
    lVar20 = lVar26;
    lVar22 = lVar27;
    if (*(long *)(lVar27 + 0x38) == 0) {
      func_0x024d8f9c(lVar27);
    }
    if (auVar38._0_8_ == 0) {
      puVar13 = &DAT_05ab6ae0;
LAB_026e93c8:
      uVar16 = func_0x0249f8f8(puVar13);
      uVar17 = func_0x04730fcc(uVar16,0);
      uVar16 = 0x26e93dc;
      auVar37 = func_0x0249fa54(uVar17,lVar27);
      goto LAB_026e93dc;
    }
    if (auVar38._8_8_ == 0) {
      puVar13 = &DAT_05aacdf8;
      goto LAB_026e93c8;
    }
    if (lVar26 == 0) {
      puVar13 = &DAT_05ab5510;
      goto LAB_026e93c8;
    }
    lVar20 = *(long *)(puVar8 + -0x60);
    uVar16 = *(undefined8 *)(puVar8 + -0x70);
    auVar37._8_8_ = *(undefined8 *)(puVar8 + -0x58);
    auVar37._0_8_ = *(undefined8 *)(puVar8 + -0x68);
    lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 0x18);
    puVar10 = puVar8 + -0x50;
    uVar17 = *(undefined8 *)(puVar8 + -0x80);
  }
  else {
    if (auVar37._8_8_ == 0) {
      puVar13 = &DAT_05ab5d58;
      goto LAB_026e9338;
    }
    lVar26 = *(long *)(puVar8 + -0x40);
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    puVar9 = puVar8 + -0x30;
    uVar16 = *(undefined8 *)(puVar8 + -0x50);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = *(ulong *)(puVar8 + -0x48);
    auVar38 = auVar38 << 0x40;
    lVar22 = lVar27;
    lVar27 = *(long *)(puVar8 + -0x38);
LAB_026e93dc:
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = uVar16;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar38;
    *(long *)(puVar9 + -0x10) = lVar26;
    *(long *)(puVar9 + -8) = lVar27;
    plVar18 = *(long **)(lVar20 + 0x38);
    if (plVar18 == (long *)0x0) {
      func_0x024d8f9c(lVar20);
      plVar18 = *(long **)(lVar20 + 0x38);
    }
    if ((*(ushort *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    plVar18 = (long *)func_0x0249fb80();
    lVar26 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x028073c8(plVar18,0xfffffffe);
    if (plVar18 != (long *)0x0) {
      func_0x022be0d8(plVar18,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0x80,auVar37._0_8_);
      func_0x022be0d8(plVar18,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0xc0,auVar37._8_8_);
      return plVar18;
    }
    uVar17 = 0x26e9488;
    auVar38 = func_0x0249fb90();
    uVar16 = 0;
  }
  *(undefined8 *)(puVar10 + -0x30) = uVar17;
  *(long **)(puVar10 + -0x28) = plVar32;
  *(undefined8 *)(puVar10 + -0x20) = uVar16;
  *(long *)(puVar10 + -0x18) = auVar37._0_8_;
  *(long *)(puVar10 + -0x10) = lVar20;
  *(long *)(puVar10 + -8) = auVar37._8_8_;
  plVar32 = *(long **)(lVar22 + 0x38);
  if (plVar32 == (long *)0x0) {
    func_0x024d8f9c(lVar22);
    plVar32 = *(long **)(lVar22 + 0x38);
  }
  if ((*(ushort *)(*plVar32 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  plVar32 = (long *)func_0x0249fb80();
  lVar27 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
  func_0x028081a0(plVar32,0xfffffffe);
  if (plVar32 != (long *)0x0) {
    func_0x022be0d8(plVar32,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,auVar38._0_8_);
    func_0x022be0d8(plVar32,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,auVar38._8_8_);
    func_0x022be0d8(plVar32,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x100,lVar26);
    return plVar32;
  }
  auVar39 = func_0x0249fb90();
  plVar18 = auVar39._8_8_;
  plVar32 = auVar39._0_8_;
  *(undefined8 *)(puVar10 + -0x50) = 0x26e9554;
  *(long *)(puVar10 + -0x48) = auVar38._8_8_;
  *(long *)(puVar10 + -0x40) = lVar22;
  *(long *)(puVar10 + -0x38) = lVar26;
  lVar26 = *(long *)(lVar27 + 0x38);
  if (lVar26 == 0) {
    func_0x024d8f9c(lVar27);
    lVar26 = *(long *)(lVar27 + 0x38);
  }
  plVar34 = *(long **)(lVar26 + 8);
  plVar23 = (long *)0x0;
  *(undefined8 *)(puVar10 + -0x90) = unaff_x29;
  *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x50);
  *(long **)(puVar10 + -0x80) = unaff_x27;
  *(undefined **)(puVar10 + -0x70) = puVar35;
  *(long **)(puVar10 + -0x68) = plVar12;
  *(long *)(puVar10 + -0x60) = auVar40._8_8_;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(long *)(puVar10 + -0x50) = auVar38._0_8_;
  *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x48);
  *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
  *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
  lVar26 = tpidr_el0;
  *(undefined8 *)(puVar10 + -0x98) = *(undefined8 *)(lVar26 + 0x28);
  lVar27 = plVar34[7];
  if (lVar27 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar27 = plVar34[7];
    if (lVar27 == 0) {
      func_0x024d8f9c(plVar34);
      lVar27 = plVar34[7];
    }
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar27 + 0x40) + 0xfc) + 0xf & 0x1fffffff0;
  plVar19 = (long *)(puVar10 + (-0xe0 - uVar14));
  plVar31 = (long *)((long)plVar19 - uVar14);
  *(undefined8 *)(puVar10 + -0xc0) = 0;
  *(undefined8 *)(puVar10 + -0xb8) = 0;
  plVar12 = (long *)func_0x026ad0ac(*(undefined8 *)(lVar27 + 8));
  auVar6._8_8_ = plVar12;
  auVar6._0_8_ = plVar34;
  auVar5._8_8_ = plVar12;
  auVar5._0_8_ = plVar34;
  auVar4._8_8_ = plVar12;
  auVar4._0_8_ = plVar34;
  auVar3._8_8_ = plVar12;
  auVar3._0_8_ = plVar34;
  auVar40._8_8_ = plVar12;
  auVar40._0_8_ = plVar34;
  if (plVar32 == (long *)0x0) {
LAB_026e9bc8:
    puVar13 = &DAT_05aaf700;
  }
  else {
    if (plVar18 != (long *)0x0) {
      lVar27 = *(long *)(plVar34[7] + 0x20);
      plVar21 = plVar23;
      if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x024d8f40(lVar27);
        plVar21 = plVar23;
      }
      lVar20 = *plVar32;
      uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar14 != 0) {
        piVar29 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == lVar27) {
            puVar15 = (undefined8 *)(lVar20 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_026e96b4;
          }
          uVar14 = uVar14 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar14 != 0);
      }
      plVar21 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x024d927c(plVar32);
LAB_026e96b4:
      uVar16 = (*(code *)*puVar15)(plVar32,puVar15[1]);
      lVar27 = plVar34[7];
      *(undefined8 *)(puVar10 + -0xb8) = uVar16;
      lVar27 = *(long *)(lVar27 + 0x20);
      bVar1 = *(byte *)(lVar27 + 0x135);
      *(undefined8 *)(puVar10 + -0xd0) = 0;
      *(undefined1 **)(puVar10 + -200) = puVar10 + -0xb8;
      if ((bVar1 & 1) == 0) {
        lVar27 = func_0x024d8f40(lVar27);
      }
      lVar20 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar14 != 0) {
        piVar29 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == lVar27) {
            puVar15 = (undefined8 *)(lVar20 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_026e9738;
          }
          uVar14 = uVar14 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar14 != 0);
      }
      plVar21 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x024d927c(plVar18);
LAB_026e9738:
      plVar32 = (long *)(*(code *)*puVar15)(plVar18,puVar15[1]);
      *(long **)(puVar10 + -0xc0) = plVar32;
      puVar35 = &DAT_059df6e0;
      *(undefined8 *)(puVar10 + -0xe0) = 0;
      *(undefined1 **)(puVar10 + -0xd8) = puVar10 + -0xc0;
      do {
        plVar33 = *(long **)(puVar10 + -0xb8);
        plVar18 = (long *)0x0;
        plVar23 = plVar21;
        if (plVar33 == (long *)0x0) {
LAB_026e9b8c:
          auVar2._8_8_ = plVar18;
          auVar2._0_8_ = &DAT_059df598;
          auVar40 = auVar3;
          if (*(long *)(lVar26 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
          plVar32 = (long *)func_0x0249fb90();
LAB_026e9ba0:
          auVar2._8_8_ = plVar18;
          auVar2._0_8_ = &DAT_059df598;
          auVar40 = auVar4;
          if (*(long *)(lVar26 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
          plVar32 = (long *)func_0x0249fb90();
          plVar21 = plVar23;
LAB_026e9bb4:
          plVar23 = plVar21;
          auVar2._8_8_ = plVar18;
          auVar2._0_8_ = &DAT_059df598;
          auVar39._8_8_ = plVar18;
          auVar39._0_8_ = &DAT_059df598;
          auVar40 = auVar5;
          if (*(long *)(lVar26 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
          func_0x0249fb90();
          goto LAB_026e9bc8;
        }
        lVar27 = *plVar33;
        uVar14 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar14 != 0) {
          piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar15 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_026e97ac;
            }
            uVar14 = uVar14 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar14 != 0);
        }
        plVar21 = (long *)0x0;
        puVar15 = (undefined8 *)func_0x024d927c(plVar33);
LAB_026e97ac:
        plVar32 = (long *)(*(code *)*puVar15)(plVar33,puVar15[1]);
        plVar33 = *(long **)(puVar10 + -0xc0);
        auVar39._8_8_ = plVar33;
        auVar39._0_8_ = &DAT_059df598;
        plVar23 = plVar21;
        if (((ulong)plVar32 & 1) == 0) {
          if (plVar33 == (long *)0x0) goto LAB_026e9c2c;
          lVar27 = *plVar33;
          uVar14 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar14 == 0) goto LAB_026e9a28;
          piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          goto LAB_026e9a10;
        }
        plVar18 = (long *)0x0;
        if (plVar33 == (long *)0x0) goto LAB_026e9ba0;
        lVar27 = *plVar33;
        uVar14 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar14 != 0) {
          piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar15 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_026e9810;
            }
            uVar14 = uVar14 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar14 != 0);
        }
        plVar21 = (long *)0x0;
        puVar15 = (undefined8 *)func_0x024d927c(plVar33);
LAB_026e9810:
        plVar32 = (long *)(*(code *)*puVar15)(plVar33,puVar15[1]);
        if (((ulong)plVar32 & 1) == 0) break;
        plVar23 = *(long **)(puVar10 + -0xb8);
        plVar18 = (long *)0x0;
        if (plVar23 == (long *)0x0) goto LAB_026e9bb4;
        lVar27 = *(long *)(plVar34[7] + 0x30);
        if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x024d8f40(lVar27);
        }
        lVar20 = *plVar23;
        uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar14 != 0) {
          piVar29 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar27) {
              lVar27 = lVar20 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_026e9890;
            }
            uVar14 = uVar14 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar14 != 0);
        }
        lVar27 = func_0x024d927c(plVar23,lVar27,0);
LAB_026e9890:
        lVar27 = *(long *)(lVar27 + 8);
        *(long **)(puVar10 + -0xb0) = plVar19;
        plVar32 = (long *)(**(code **)(lVar27 + 0x10))
                                    (*(undefined8 *)(lVar27 + 8),lVar27,plVar23,puVar10 + -0xb0,
                                     plVar19);
        plVar18 = *(long **)(puVar10 + -0xc0);
        auVar2._8_8_ = plVar18;
        auVar2._0_8_ = &DAT_059df598;
        if (plVar18 == (long *)0x0) {
LAB_026e9b78:
          if (*(long *)(lVar26 + 0x28) == *(long *)(puVar10 + -0x98)) {
            plVar32 = (long *)func_0x0249fb90();
            goto LAB_026e9b8c;
          }
          goto LAB_026e9cfc;
        }
        lVar27 = *(long *)(plVar34[7] + 0x30);
        if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x024d8f40(lVar27);
        }
        lVar20 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar14 != 0) {
          piVar29 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar27) {
              lVar27 = lVar20 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_026e991c;
            }
            uVar14 = uVar14 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar14 != 0);
        }
        lVar27 = func_0x024d927c(plVar18,lVar27,0);
LAB_026e991c:
        lVar27 = *(long *)(lVar27 + 8);
        *(long **)(puVar10 + -0xb0) = plVar31;
        plVar23 = plVar18;
        plVar32 = (long *)(**(code **)(lVar27 + 0x10))
                                    (*(undefined8 *)(lVar27 + 8),lVar27,plVar18,puVar10 + -0xb0,
                                     plVar31);
        if (plVar12 == (long *)0x0) goto LAB_026e9b78;
        plVar32 = (long *)plVar34[7];
        lVar27 = *plVar32;
        if ((*(ushort *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x024d8f40(lVar27);
          plVar32 = (long *)plVar34[7];
        }
        plVar33 = plVar19;
        unaff_x27 = plVar31;
        if (-1 < *(int *)(plVar32[8] + 0x28)) {
          plVar33 = (long *)*plVar19;
          unaff_x27 = (long *)*plVar31;
        }
        lVar20 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar14 != 0) {
          piVar29 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar27) {
              lVar27 = lVar20 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_026e99c4;
            }
            uVar14 = uVar14 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar14 != 0);
        }
        lVar27 = func_0x024d927c(plVar12,lVar27,0);
LAB_026e99c4:
        *(long **)(puVar10 + -0xb0) = plVar33;
        *(long **)(puVar10 + -0xa8) = unaff_x27;
        lVar27 = *(long *)(lVar27 + 8);
        plVar21 = plVar12;
        plVar32 = (long *)(**(code **)(lVar27 + 0x10))
                                    (*(undefined8 *)(lVar27 + 8),lVar27,plVar12,puVar10 + -0xb0,
                                     puVar10 + -0x9c);
      } while (puVar10[-0x9c] != '\0');
      plVar19 = (long *)0xc;
LAB_026e9a64:
      auVar39._8_8_ = plVar33;
      auVar39._0_8_ = &DAT_059df598;
      plVar34 = (long *)0x0;
      puVar15 = (undefined8 *)(puVar10 + -0xc0);
      plVar23 = plVar21;
      goto LAB_026e9a68;
    }
    puVar13 = &DAT_05ab5c10;
  }
  plVar32 = (long *)func_0x0249f8f8(puVar13);
  auVar2 = auVar39;
  auVar40 = auVar6;
  if (*(long *)(lVar26 + 0x28) == *(long *)(puVar10 + -0x98)) {
    uVar16 = func_0x04730fcc(plVar32,0);
    plVar32 = (long *)func_0x0249fa54(uVar16,plVar34);
    do {
      auVar40._8_8_ = plVar12;
      auVar40._0_8_ = plVar34;
      auVar2 = auVar39;
      if (*(long *)(lVar26 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
      plVar32 = (long *)func_0x0249fb88();
      do {
        auVar40._8_8_ = plVar12;
        auVar40._0_8_ = plVar34;
        auVar2 = auVar39;
        if (*(long *)(lVar26 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
        plVar32 = (long *)func_0x0249fb88(plVar34);
LAB_026e9c2c:
        auVar40._8_8_ = plVar12;
        auVar40._0_8_ = plVar34;
        auVar2 = auVar39;
        if (*(long *)(lVar26 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
        auVar40 = func_0x0249fb90();
        plVar12 = auVar40._8_8_;
        uVar16 = auVar40._0_8_;
        if (auVar40._8_4_ != 1) {
          func_0x022bd79c(puVar10 + -0xe0);
          if (auVar40._8_4_ != 1) {
            plVar32 = (long *)func_0x022bd79c(puVar10 + -0xd0);
            if (*(long *)(lVar26 + 0x28) == *(long *)(puVar10 + -0x98)) {
              plVar32 = (long *)func_0x0258f7ac(uVar16);
            }
            goto LAB_026e9cfc;
          }
          puVar15 = (undefined8 *)func_0x054ed080(uVar16);
          *(undefined8 *)(puVar10 + -0xd0) = *puVar15;
          func_0x054ed090();
          goto LAB_026e9ad0;
        }
        puVar15 = (undefined8 *)func_0x054ed080(uVar16);
        plVar34 = (long *)*puVar15;
        *(long **)(puVar10 + -0xe0) = plVar34;
        plVar32 = (long *)func_0x054ed090();
        puVar15 = *(undefined8 **)(puVar10 + -0xd8);
        plVar19 = (long *)0x0;
LAB_026e9a68:
        plVar12 = (long *)*puVar15;
        if (plVar12 != (long *)0x0) {
          lVar27 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar14 != 0) {
            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *auVar39._0_8_) {
                puVar15 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_026e9abc;
              }
              uVar14 = uVar14 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar14 != 0);
          }
          plVar23 = (long *)0x0;
          puVar15 = (undefined8 *)func_0x024d927c(plVar12);
LAB_026e9abc:
          plVar32 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
        }
      } while (plVar34 != (long *)0x0);
      if ((int)plVar19 == 0) {
LAB_026e9ad0:
        plVar19 = (long *)0x0;
      }
      plVar34 = (long *)**(undefined8 **)(puVar10 + -200);
      auVar40._8_8_ = plVar12;
      auVar40._0_8_ = plVar34;
      if (plVar34 != (long *)0x0) {
        lVar27 = *plVar34;
        uVar14 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar14 != 0) {
          piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *auVar39._0_8_) {
              puVar15 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_026e9b2c;
            }
            uVar14 = uVar14 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar14 != 0);
        }
        plVar23 = (long *)0x0;
        puVar15 = (undefined8 *)func_0x024d927c(plVar34);
LAB_026e9b2c:
        (*(code *)*puVar15)(plVar34,puVar15[1]);
      }
      plVar32 = *(long **)(puVar10 + -0xd0);
    } while (plVar32 != (long *)0x0);
    plVar32 = (long *)(ulong)((int)plVar19 != 0xc);
    auVar2 = auVar39;
    if (*(long *)(lVar26 + 0x28) == *(long *)(puVar10 + -0x98)) {
      return plVar32;
    }
  }
LAB_026e9cfc:
  func_0x054ed0f0(plVar32);
  func_0x022bd790();
  plVar31[-0xc] = (long)(puVar10 + -0x90);
  plVar31[-0xb] = 0x26e9d04;
  plVar31[-10] = (long)unaff_x27;
  plVar31[-8] = (long)puVar35;
  plVar31[-7] = lVar26;
  *(undefined1 (*) [16])(plVar31 + -6) = auVar2;
  plVar31[-4] = (long)plVar31;
  plVar31[-3] = (long)plVar19;
  plVar31[-2] = auVar40._8_8_;
  plVar31[-1] = auVar40._0_8_;
  lVar26 = tpidr_el0;
  plVar31[-0xd] = *(long *)(lVar26 + 0x28);
  lVar26 = plVar23[7];
  if (lVar26 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar26 = plVar23[7];
    if (lVar26 == 0) {
      func_0x024d8f9c(plVar23);
      lVar26 = plVar23[7];
    }
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar26 + 0x28) + 0xfc);
  plVar31[-0x11] = 0;
  plVar32 = (long *)memset((long)plVar31 + (uVar14 + 0xf & 0x1fffffff0) * -2 + -0x90,0,uVar14);
  return plVar32;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar29 = piVar29 + 4;
    if (uVar14 == 0) break;
LAB_026e9a10:
    if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
      puVar15 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_026e9a44;
    }
  }
LAB_026e9a28:
  plVar21 = (long *)0x0;
  puVar15 = (undefined8 *)func_0x024d927c(plVar33);
LAB_026e9a44:
  plVar32 = (long *)(*(code *)*puVar15)(plVar33,puVar15[1]);
  uVar24 = 0xc;
  if (((ulong)plVar32 & 1) == 0) {
    uVar24 = 0xe;
  }
  plVar19 = (long *)(ulong)uVar24;
  goto LAB_026e9a64;
}

