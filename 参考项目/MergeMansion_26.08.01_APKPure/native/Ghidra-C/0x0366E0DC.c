/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/BoardExtensions.txt
 * Cpp2IL method: System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<GameLogic.Player.Board.Coordinate, GameLogic.Player.Items.MergeItem>> Items(GameLogic.Player.Board.IBoard mergeBoard)
 * Ghidra function entry: 0376e0dc
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

ulong FUN_0376e0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  long *plVar32;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  char acStack_27c [556];
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  if ((bRam0000000005e2df34 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a44708);
    func_0x0249f8e4(&DAT_059c59a8);
    func_0x0249f8e4(&DAT_05a5fad0);
    func_0x0249f8e4(&DAT_059eb100);
    bRam0000000005e2df34 = 1;
  }
  plVar16 = (long *)func_0x0376df78(param_1);
  if (*(int *)(_DAT_059eb100 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059eb100);
  }
  puVar25 = *(undefined8 **)(_DAT_059eb100 + 0xb8);
  lVar29 = puVar25[1];
  if (lVar29 == 0) {
    if (*(int *)(_DAT_059eb100 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059eb100);
      puVar25 = *(undefined8 **)(_DAT_059eb100 + 0xb8);
    }
    uVar31 = *puVar25;
    lVar29 = func_0x0249fb80(_DAT_059c59a8);
    param_4 = 0;
    func_0x02a9aa34(lVar29,uVar31,_DAT_05a5fad0);
    plVar17 = (long *)(*(long *)(_DAT_059eb100 + 0xb8) + 8);
    *plVar17 = lVar29;
    func_0x0249f888(plVar17,lVar29);
  }
  lVar20 = _DAT_05a44708;
  lVar22 = _DAT_05a44708;
  if (*(long *)(_DAT_05a44708 + 0x38) == 0) {
    func_0x024d8f9c(_DAT_05a44708);
  }
  if (plVar16 == (long *)0x0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026ec830:
    uVar31 = func_0x0249f8f8(puVar12);
    uVar31 = func_0x04730fcc(uVar31,0);
    func_0x0249fa54(uVar31,lVar20);
LAB_026ec844:
    func_0x0249ff10(plVar16);
  }
  else {
    if (lVar29 == 0) {
      puVar12 = &DAT_05ab4990;
      goto LAB_026ec830;
    }
    lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x024d8f40();
    }
    lVar24 = *plVar16;
    bVar1 = *(byte *)(lVar24 + 0x130);
    if (*(byte *)(lVar13 + 0x130) <= bVar1) {
      lVar28 = *(long *)(lVar20 + 0x38);
      if (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)
      goto LAB_026ec5d0;
      lVar13 = *(long *)(lVar28 + 0x10);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x024d8f40(lVar13);
        lVar24 = *plVar16;
        bVar1 = *(byte *)(lVar24 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x024d8f40(lVar13);
          lVar24 = *plVar16;
          bVar1 = *(byte *)(lVar24 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
                    /* WARNING: Could not recover jumptable at 0x026ec73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (**(code **)(lVar24 + 0x228))(plVar16,lVar29,*(undefined8 *)(lVar24 + 0x230));
          return uVar14;
        }
      }
      goto LAB_026ec844;
    }
    lVar28 = *(long *)(lVar20 + 0x38);
LAB_026ec5d0:
    lVar13 = *(long *)(lVar28 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x024d8f40(lVar13);
    }
    lVar13 = func_0x0249fa68(plVar16,lVar13);
    if (lVar13 == 0) {
      lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x024d8f40();
      }
      if (*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar13 + 0x130)) {
        lVar24 = *(long *)(lVar20 + 0x38);
LAB_026ec758:
        if ((*(ushort *)(*(long *)(lVar24 + 0x50) + 0x135) & 1) == 0) {
          func_0x024d8f40();
        }
        uVar14 = func_0x0249fb80();
        func_0x029a73b8(uVar14,plVar16,lVar29,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x58));
        return uVar14;
      }
      lVar24 = *(long *)(lVar20 + 0x38);
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         ) goto LAB_026ec758;
      if ((*(ushort *)(*(long *)(lVar24 + 0x40) + 0x135) & 1) == 0) {
        func_0x024d8f40();
      }
      unaff_x22 = func_0x0249fb80();
      lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x024d8f40(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x029a7a94(unaff_x22,plVar16,lVar29,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_026ec844;
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    unaff_x22 = func_0x0249fb80();
    unaff_x23 = *(long *)(*(long *)(lVar20 + 0x38) + 0x20);
    if ((*(ushort *)(unaff_x23 + 0x135) & 1) == 0) {
      unaff_x23 = func_0x024d8f40(unaff_x23);
    }
    lVar13 = func_0x0249fa68(plVar16,unaff_x23);
    if (lVar13 != 0) {
      func_0x029a6f28(unaff_x22,lVar13,lVar29,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar38 = func_0x0249ff10(plVar16,unaff_x23);
  puVar25 = &uStack_50;
  uStack_50 = 0x26ec858;
  lVar13 = lVar22;
  lStack_48 = lVar20;
  plStack_40 = plVar16;
  lStack_38 = lVar29;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x024d8f9c(lVar22);
  }
  auVar34._8_8_ = plStack_40;
  auVar34._0_8_ = lStack_48;
  if (auVar38._0_8_ == 0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026ec8b4:
    uVar31 = func_0x0249f8f8(puVar12);
    uVar33 = func_0x04730fcc(uVar31,0);
    uVar31 = 0x26ec8c8;
    auVar35 = func_0x0249fa54(uVar33,lVar22);
  }
  else {
    if (auVar38._8_8_ == 0) {
      puVar12 = &DAT_05ab4990;
      goto LAB_026ec8b4;
    }
    lVar13 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
    puVar25 = (undefined8 *)&stack0xffffffffffffffd0;
    lVar22 = lStack_38;
    uVar31 = uStack_50;
    auVar35 = auVar38;
    auVar38 = auVar34;
  }
  *(undefined8 *)((long)puVar25 + -0x30) = uVar31;
  *(ulong *)((long)puVar25 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar25 + -0x18) = auVar38;
  *(long *)((long)puVar25 + -8) = lVar22;
  plVar16 = *(long **)(lVar13 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x024d8f9c(lVar13);
    plVar16 = *(long **)(lVar13 + 0x38);
  }
  if ((*(ushort *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar14 = func_0x0249fb80();
  lVar29 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x02811938(uVar14,0xfffffffe);
  if (uVar14 != 0) {
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x80,auVar35._0_8_);
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0xc0,auVar35._8_8_);
    return uVar14;
  }
  auVar38 = func_0x0249fb90();
  puVar10 = (undefined1 *)((long)puVar25 + -0x60);
  *(undefined8 *)((long)puVar25 + -0x60) = 0x26ec974;
  *(undefined8 *)((long)puVar25 + -0x50) = 0;
  *(long *)((long)puVar25 + -0x48) = auVar35._0_8_;
  *(long *)((long)puVar25 + -0x40) = lVar13;
  *(long *)((long)puVar25 + -0x38) = auVar35._8_8_;
  lVar20 = lVar29;
  lVar22 = param_4;
  if (*(long *)(param_4 + 0x38) == 0) {
    func_0x024d8f9c(param_4);
  }
  if (auVar38._0_8_ == 0) {
    puVar12 = &DAT_05aaf700;
LAB_026ec9f0:
    uVar31 = func_0x0249f8f8(puVar12);
    uVar31 = func_0x04730fcc(uVar31,0);
    uVar33 = 0x26eca04;
    auVar34 = func_0x0249fa54(uVar31,param_4);
  }
  else {
    if (auVar38._8_8_ == 0) {
      puVar12 = &DAT_05ab5c10;
      goto LAB_026ec9f0;
    }
    if (lVar29 == 0) {
      puVar12 = &DAT_05ab5510;
      goto LAB_026ec9f0;
    }
    plVar16 = (long *)(param_4 + 0x38);
    param_4 = *(long *)((long)puVar25 + -0x38);
    lVar22 = *(long *)(*plVar16 + 0x18);
    puVar10 = (undefined1 *)((long)puVar25 + -0x30);
    uVar33 = *(undefined8 *)((long)puVar25 + -0x60);
    lVar20 = lVar29;
    lVar29 = *(long *)((long)puVar25 + -0x40);
    auVar34 = auVar38;
    auVar38 = *(undefined1 (*) [16])((long)puVar25 + -0x50);
  }
  uVar14 = auVar34._0_8_;
  *(undefined8 *)(puVar10 + -0x30) = uVar33;
  *(long *)(puVar10 + -0x28) = unaff_x23;
  *(undefined1 (*) [16])(puVar10 + -0x20) = auVar38;
  *(long *)(puVar10 + -0x10) = lVar29;
  *(long *)(puVar10 + -8) = param_4;
  plVar16 = *(long **)(lVar22 + 0x38);
  lVar29 = lVar22;
  if (plVar16 == (long *)0x0) {
    func_0x024d8f9c(lVar22);
    plVar16 = *(long **)(lVar22 + 0x38);
  }
  if ((*(ushort *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar15 = func_0x0249fb80();
  lVar13 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
  func_0x029b6780(uVar15,0xfffffffe);
  if (uVar15 != 0) {
    func_0x022be0d8(uVar15,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,uVar14);
    func_0x022be0d8(uVar15,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,auVar34._8_8_);
    func_0x022be0d8(uVar15,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x100,lVar20);
    return uVar15;
  }
  auVar38 = func_0x0249fb90();
  lVar24 = auVar38._8_8_;
  plVar16 = auVar38._0_8_;
  *(undefined8 *)(puVar10 + -0x50) = 0x26ecad0;
  *(long *)(puVar10 + -0x48) = auVar34._8_8_;
  *(long *)(puVar10 + -0x40) = lVar22;
  *(long *)(puVar10 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar13 + 0x38);
  if (lVar20 == 0) {
    func_0x024d8f9c(lVar13);
    lVar20 = *(long *)(lVar13 + 0x38);
  }
  lVar20 = *(long *)(lVar20 + 0x10);
  *(undefined8 *)(puVar10 + -0x60) = *(undefined8 *)(puVar10 + -0x50);
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(ulong *)(puVar10 + -0x50) = uVar14;
  *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x48);
  *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
  *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
  lVar22 = lVar20;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x024d8f9c(lVar20);
  }
  if (plVar16 == (long *)0x0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026e9198:
    uVar31 = func_0x0249f8f8(puVar12);
    uVar31 = func_0x04730fcc(uVar31,0);
    func_0x0249fa54(uVar31,lVar20);
LAB_026e91ac:
    func_0x0249ff10(plVar16);
    lVar13 = 0;
  }
  else {
    if (lVar24 == 0) {
      puVar12 = &DAT_05ab5d58;
      goto LAB_026e9198;
    }
    lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x024d8f40();
    }
    lVar28 = *plVar16;
    bVar1 = *(byte *)(lVar28 + 0x130);
    if (*(byte *)(lVar13 + 0x130) <= bVar1) {
      lVar26 = *(long *)(lVar20 + 0x38);
      if (*(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)
      goto LAB_026e8f18;
      lVar13 = *(long *)(lVar26 + 0x10);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x024d8f40(lVar13);
        lVar28 = *plVar16;
        bVar1 = *(byte *)(lVar28 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 0x18);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x024d8f40(lVar13);
          lVar28 = *plVar16;
          bVar1 = *(byte *)(lVar28 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
          lVar29 = func_0x0249fa60(*(undefined8 *)
                                    (lVar28 + (ulong)*(ushort *)(lVar20 + 0x50) * 0x10 + 0x140),
                                   lVar20);
                    /* WARNING: Could not recover jumptable at 0x026e909c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (**(code **)(lVar29 + 8))(plVar16,lVar24,lVar29);
          return uVar14;
        }
      }
      goto LAB_026e91ac;
    }
    lVar26 = *(long *)(lVar20 + 0x38);
LAB_026e8f18:
    lVar13 = *(long *)(lVar26 + 0x28);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x024d8f40(lVar13);
    }
    lVar13 = func_0x0249fa68(plVar16,lVar13);
    if (lVar13 == 0) {
      lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x48);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x024d8f40();
      }
      if (*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar13 + 0x130)) {
        lVar28 = *(long *)(lVar20 + 0x38);
LAB_026e90b8:
        if ((*(ushort *)(*(long *)(lVar28 + 0x60) + 0x135) & 1) == 0) {
          func_0x024d8f40();
        }
        uVar14 = func_0x0249fb80();
        func_0x029a85c0(uVar14,plVar16,0,lVar24,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x68));
        return uVar14;
      }
      lVar28 = *(long *)(lVar20 + 0x38);
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         ) goto LAB_026e90b8;
      if ((*(ushort *)(*(long *)(lVar28 + 0x50) + 0x135) & 1) == 0) {
        func_0x024d8f40();
      }
      uVar14 = func_0x0249fb80();
      lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x48);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x024d8f40(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x029a8d1c(uVar14,plVar16,0,lVar24,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x58));
        return uVar14;
      }
      goto LAB_026e91ac;
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    uVar14 = func_0x0249fb80();
    lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x28);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x024d8f40(lVar13);
    }
    lVar28 = func_0x0249fa68(plVar16,lVar13);
    if (lVar28 != 0) {
      func_0x029a80a8(uVar14,lVar28,0,lVar24,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x38));
      return uVar14;
    }
  }
  auVar34 = func_0x0249ff10(plVar16,lVar13);
  puVar7 = puVar10 + -0x80;
  *(undefined8 *)(puVar10 + -0x80) = 0x26e91c0;
  *(long *)(puVar10 + -0x78) = lVar20;
  *(undefined1 (*) [16])(puVar10 + -0x70) = auVar38;
  lVar20 = lVar22;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x024d8f9c(lVar22);
  }
  if (auVar34._0_8_ == 0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026e921c:
    uVar31 = func_0x0249f8f8(puVar12);
    uVar33 = func_0x04730fcc(uVar31,0);
    uVar31 = 0x26e9230;
    auVar38 = func_0x0249fa54(uVar33,lVar22);
  }
  else {
    if (auVar34._8_8_ == 0) {
      puVar12 = &DAT_05ab5d58;
      goto LAB_026e921c;
    }
    plVar16 = (long *)(lVar22 + 0x38);
    lVar22 = *(long *)(puVar10 + -0x68);
    lVar20 = *(long *)(*plVar16 + 0x10);
    puVar7 = puVar10 + -0x60;
    uVar31 = *(undefined8 *)(puVar10 + -0x80);
    auVar38 = auVar34;
    auVar34 = *(undefined1 (*) [16])(puVar10 + -0x78);
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar31;
  *(ulong *)(puVar7 + -0x20) = uVar14;
  *(undefined1 (*) [16])(puVar7 + -0x18) = auVar34;
  *(long *)(puVar7 + -8) = lVar22;
  plVar16 = *(long **)(lVar20 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x024d8f9c(lVar20);
    plVar16 = *(long **)(lVar20 + 0x38);
  }
  if ((*(ushort *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar14 = func_0x0249fb80();
  lVar22 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
  func_0x02806980(uVar14,0xfffffffe);
  if (uVar14 != 0) {
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0x80,auVar38._0_8_);
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0xc0,auVar38._8_8_);
    return uVar14;
  }
  auVar35 = func_0x0249fb90();
  *(undefined8 *)(puVar7 + -0x50) = 0x26e92dc;
  *(long *)(puVar7 + -0x48) = auVar38._0_8_;
  *(long *)(puVar7 + -0x40) = lVar20;
  *(long *)(puVar7 + -0x38) = auVar38._8_8_;
  lVar20 = lVar22;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x024d8f9c(lVar22);
  }
  if (auVar35._0_8_ == 0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026e9338:
    uVar31 = func_0x0249f8f8(puVar12);
    uVar31 = func_0x04730fcc(uVar31,0);
    auVar38 = func_0x0249fa54(uVar31,lVar22);
    puVar8 = puVar7 + -0x80;
    *(undefined8 *)(puVar7 + -0x80) = 0x26e934c;
    *(undefined8 *)(puVar7 + -0x70) = 0;
    *(undefined1 (*) [16])(puVar7 + -0x68) = auVar35;
    *(long *)(puVar7 + -0x58) = lVar22;
    lVar22 = lVar20;
    lVar24 = lVar29;
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x024d8f9c(lVar29);
    }
    if (auVar38._0_8_ == 0) {
      puVar12 = &DAT_05ab6ae0;
LAB_026e93c8:
      uVar31 = func_0x0249f8f8(puVar12);
      uVar33 = func_0x04730fcc(uVar31,0);
      uVar31 = 0x26e93dc;
      auVar35 = func_0x0249fa54(uVar33,lVar29);
      goto LAB_026e93dc;
    }
    if (auVar38._8_8_ == 0) {
      puVar12 = &DAT_05aacdf8;
      goto LAB_026e93c8;
    }
    if (lVar20 == 0) {
      puVar12 = &DAT_05ab5510;
      goto LAB_026e93c8;
    }
    lVar22 = *(long *)(puVar7 + -0x60);
    uVar31 = *(undefined8 *)(puVar7 + -0x70);
    auVar35._8_8_ = *(undefined8 *)(puVar7 + -0x58);
    auVar35._0_8_ = *(undefined8 *)(puVar7 + -0x68);
    lVar24 = *(long *)(*(long *)(lVar29 + 0x38) + 0x18);
    puVar9 = puVar7 + -0x50;
    uVar33 = *(undefined8 *)(puVar7 + -0x80);
  }
  else {
    if (auVar35._8_8_ == 0) {
      puVar12 = &DAT_05ab5d58;
      goto LAB_026e9338;
    }
    lVar20 = *(long *)(puVar7 + -0x40);
    lVar22 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
    puVar8 = puVar7 + -0x30;
    uVar31 = *(undefined8 *)(puVar7 + -0x50);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = *(ulong *)(puVar7 + -0x48);
    auVar38 = auVar38 << 0x40;
    lVar24 = lVar29;
    lVar29 = *(long *)(puVar7 + -0x38);
LAB_026e93dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = uVar31;
    *(undefined1 (*) [16])(puVar8 + -0x20) = auVar38;
    *(long *)(puVar8 + -0x10) = lVar20;
    *(long *)(puVar8 + -8) = lVar29;
    plVar16 = *(long **)(lVar22 + 0x38);
    if (plVar16 == (long *)0x0) {
      func_0x024d8f9c(lVar22);
      plVar16 = *(long **)(lVar22 + 0x38);
    }
    if ((*(ushort *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    uVar14 = func_0x0249fb80();
    lVar20 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    func_0x028073c8(uVar14,0xfffffffe);
    if (uVar14 != 0) {
      func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,auVar35._0_8_);
      func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,auVar35._8_8_);
      return uVar14;
    }
    uVar33 = 0x26e9488;
    auVar38 = func_0x0249fb90();
    uVar31 = 0;
  }
  *(undefined8 *)(puVar9 + -0x30) = uVar33;
  *(long *)(puVar9 + -0x28) = lVar13;
  *(undefined8 *)(puVar9 + -0x20) = uVar31;
  *(long *)(puVar9 + -0x18) = auVar35._0_8_;
  *(long *)(puVar9 + -0x10) = lVar22;
  *(long *)(puVar9 + -8) = auVar35._8_8_;
  plVar16 = *(long **)(lVar24 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x024d8f9c(lVar24);
    plVar16 = *(long **)(lVar24 + 0x38);
  }
  if ((*(ushort *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar14 = func_0x0249fb80();
  lVar29 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
  func_0x028081a0(uVar14,0xfffffffe);
  if (uVar14 != 0) {
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0x80,auVar38._0_8_);
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0xc0,auVar38._8_8_);
    func_0x022be0d8(uVar14,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0x100,lVar20);
    return uVar14;
  }
  auVar36 = func_0x0249fb90();
  plVar17 = auVar36._8_8_;
  plVar16 = auVar36._0_8_;
  *(undefined8 *)(puVar9 + -0x50) = 0x26e9554;
  *(long *)(puVar9 + -0x48) = auVar38._8_8_;
  *(long *)(puVar9 + -0x40) = lVar24;
  *(long *)(puVar9 + -0x38) = lVar20;
  lVar20 = *(long *)(lVar29 + 0x38);
  if (lVar20 == 0) {
    func_0x024d8f9c(lVar29);
    lVar20 = *(long *)(lVar29 + 0x38);
  }
  plVar21 = *(long **)(lVar20 + 8);
  plVar18 = (long *)0x0;
  *(undefined8 *)(puVar9 + -0x90) = unaff_x29;
  *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x50);
  *(long **)(puVar9 + -0x80) = unaff_x27;
  *(undefined **)(puVar9 + -0x70) = unaff_x26;
  *(undefined8 *)(puVar9 + -0x68) = unaff_x25;
  *(undefined8 *)(puVar9 + -0x60) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(long *)(puVar9 + -0x50) = auVar38._0_8_;
  *(undefined8 *)(puVar9 + -0x48) = *(undefined8 *)(puVar9 + -0x48);
  *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
  *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
  lVar29 = tpidr_el0;
  *(undefined8 *)(puVar9 + -0x98) = *(undefined8 *)(lVar29 + 0x28);
  lVar20 = plVar21[7];
  if (lVar20 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar20 = plVar21[7];
    if (lVar20 == 0) {
      func_0x024d8f9c(plVar21);
      lVar20 = plVar21[7];
    }
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar20 + 0x40) + 0xfc) + 0xf & 0x1fffffff0;
  plVar30 = (long *)(puVar9 + (-0xe0 - uVar14));
  plVar32 = (long *)((long)plVar30 - uVar14);
  *(undefined8 *)(puVar9 + -0xc0) = 0;
  *(undefined8 *)(puVar9 + -0xb8) = 0;
  plVar11 = (long *)func_0x026ad0ac(*(undefined8 *)(lVar20 + 8));
  auVar6._8_8_ = plVar11;
  auVar6._0_8_ = plVar21;
  auVar5._8_8_ = plVar11;
  auVar5._0_8_ = plVar21;
  auVar4._8_8_ = plVar11;
  auVar4._0_8_ = plVar21;
  auVar3._8_8_ = plVar11;
  auVar3._0_8_ = plVar21;
  auVar37._8_8_ = plVar11;
  auVar37._0_8_ = plVar21;
  if (plVar16 == (long *)0x0) {
LAB_026e9bc8:
    puVar12 = &DAT_05aaf700;
  }
  else {
    if (plVar17 != (long *)0x0) {
      lVar20 = *(long *)(plVar21[7] + 0x20);
      plVar19 = plVar18;
      if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x024d8f40(lVar20);
        plVar19 = plVar18;
      }
      lVar22 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar14 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar20) {
            puVar25 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_026e96b4;
          }
          uVar14 = uVar14 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar14 != 0);
      }
      plVar19 = (long *)0x0;
      puVar25 = (undefined8 *)func_0x024d927c(plVar16);
LAB_026e96b4:
      uVar31 = (*(code *)*puVar25)(plVar16,puVar25[1]);
      lVar20 = plVar21[7];
      *(undefined8 *)(puVar9 + -0xb8) = uVar31;
      lVar20 = *(long *)(lVar20 + 0x20);
      bVar1 = *(byte *)(lVar20 + 0x135);
      *(undefined8 *)(puVar9 + -0xd0) = 0;
      *(undefined1 **)(puVar9 + -200) = puVar9 + -0xb8;
      if ((bVar1 & 1) == 0) {
        lVar20 = func_0x024d8f40(lVar20);
      }
      lVar22 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar14 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar20) {
            puVar25 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_026e9738;
          }
          uVar14 = uVar14 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar14 != 0);
      }
      plVar19 = (long *)0x0;
      puVar25 = (undefined8 *)func_0x024d927c(plVar17);
LAB_026e9738:
      uVar14 = (*(code *)*puVar25)(plVar17,puVar25[1]);
      *(ulong *)(puVar9 + -0xc0) = uVar14;
      unaff_x26 = &DAT_059df6e0;
      *(undefined8 *)(puVar9 + -0xe0) = 0;
      *(undefined1 **)(puVar9 + -0xd8) = puVar9 + -0xc0;
      do {
        plVar17 = *(long **)(puVar9 + -0xb8);
        plVar16 = (long *)0x0;
        plVar18 = plVar19;
        if (plVar17 == (long *)0x0) {
LAB_026e9b8c:
          auVar2._8_8_ = plVar16;
          auVar2._0_8_ = &DAT_059df598;
          auVar37 = auVar3;
          if (*(long *)(lVar29 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
          uVar14 = func_0x0249fb90();
LAB_026e9ba0:
          auVar2._8_8_ = plVar16;
          auVar2._0_8_ = &DAT_059df598;
          auVar37 = auVar4;
          if (*(long *)(lVar29 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
          uVar14 = func_0x0249fb90();
          plVar19 = plVar18;
LAB_026e9bb4:
          plVar18 = plVar19;
          auVar2._8_8_ = plVar16;
          auVar2._0_8_ = &DAT_059df598;
          auVar36._8_8_ = plVar16;
          auVar36._0_8_ = &DAT_059df598;
          auVar37 = auVar5;
          if (*(long *)(lVar29 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
          func_0x0249fb90();
          goto LAB_026e9bc8;
        }
        lVar20 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar14 != 0) {
          piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == _DAT_059df6e0) {
              puVar25 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_026e97ac;
            }
            uVar14 = uVar14 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar14 != 0);
        }
        plVar19 = (long *)0x0;
        puVar25 = (undefined8 *)func_0x024d927c(plVar17);
LAB_026e97ac:
        uVar14 = (*(code *)*puVar25)(plVar17,puVar25[1]);
        plVar17 = *(long **)(puVar9 + -0xc0);
        auVar36._8_8_ = plVar17;
        auVar36._0_8_ = &DAT_059df598;
        plVar18 = plVar19;
        if ((uVar14 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto LAB_026e9c2c;
          lVar20 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 == 0) goto LAB_026e9a28;
          piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          goto LAB_026e9a10;
        }
        plVar16 = (long *)0x0;
        if (plVar17 == (long *)0x0) goto LAB_026e9ba0;
        lVar20 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar14 != 0) {
          piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == _DAT_059df6e0) {
              puVar25 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_026e9810;
            }
            uVar14 = uVar14 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar14 != 0);
        }
        plVar19 = (long *)0x0;
        puVar25 = (undefined8 *)func_0x024d927c(plVar17);
LAB_026e9810:
        uVar14 = (*(code *)*puVar25)(plVar17,puVar25[1]);
        if ((uVar14 & 1) == 0) break;
        plVar18 = *(long **)(puVar9 + -0xb8);
        plVar16 = (long *)0x0;
        if (plVar18 == (long *)0x0) goto LAB_026e9bb4;
        lVar20 = *(long *)(plVar21[7] + 0x30);
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x024d8f40(lVar20);
        }
        lVar22 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar14 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar20) {
              lVar20 = lVar22 + (long)*piVar27 * 0x10 + 0x138;
              goto LAB_026e9890;
            }
            uVar14 = uVar14 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar14 != 0);
        }
        lVar20 = func_0x024d927c(plVar18,lVar20,0);
LAB_026e9890:
        lVar20 = *(long *)(lVar20 + 8);
        *(long **)(puVar9 + -0xb0) = plVar30;
        uVar14 = (**(code **)(lVar20 + 0x10))
                           (*(undefined8 *)(lVar20 + 8),lVar20,plVar18,puVar9 + -0xb0,plVar30);
        plVar16 = *(long **)(puVar9 + -0xc0);
        auVar2._8_8_ = plVar16;
        auVar2._0_8_ = &DAT_059df598;
        if (plVar16 == (long *)0x0) {
LAB_026e9b78:
          if (*(long *)(lVar29 + 0x28) == *(long *)(puVar9 + -0x98)) {
            uVar14 = func_0x0249fb90();
            goto LAB_026e9b8c;
          }
          goto LAB_026e9cfc;
        }
        lVar20 = *(long *)(plVar21[7] + 0x30);
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x024d8f40(lVar20);
        }
        lVar22 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar14 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar20) {
              lVar20 = lVar22 + (long)*piVar27 * 0x10 + 0x138;
              goto LAB_026e991c;
            }
            uVar14 = uVar14 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar14 != 0);
        }
        lVar20 = func_0x024d927c(plVar16,lVar20,0);
LAB_026e991c:
        lVar20 = *(long *)(lVar20 + 8);
        *(long **)(puVar9 + -0xb0) = plVar32;
        plVar18 = plVar16;
        uVar14 = (**(code **)(lVar20 + 0x10))
                           (*(undefined8 *)(lVar20 + 8),lVar20,plVar16,puVar9 + -0xb0,plVar32);
        if (plVar11 == (long *)0x0) goto LAB_026e9b78;
        plVar16 = (long *)plVar21[7];
        lVar20 = *plVar16;
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x024d8f40(lVar20);
          plVar16 = (long *)plVar21[7];
        }
        plVar17 = plVar30;
        unaff_x27 = plVar32;
        if (-1 < *(int *)(plVar16[8] + 0x28)) {
          plVar17 = (long *)*plVar30;
          unaff_x27 = (long *)*plVar32;
        }
        lVar22 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar14 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar20) {
              lVar20 = lVar22 + (long)*piVar27 * 0x10 + 0x138;
              goto LAB_026e99c4;
            }
            uVar14 = uVar14 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar14 != 0);
        }
        lVar20 = func_0x024d927c(plVar11,lVar20,0);
LAB_026e99c4:
        *(long **)(puVar9 + -0xb0) = plVar17;
        *(long **)(puVar9 + -0xa8) = unaff_x27;
        lVar20 = *(long *)(lVar20 + 8);
        plVar19 = plVar11;
        uVar14 = (**(code **)(lVar20 + 0x10))
                           (*(undefined8 *)(lVar20 + 8),lVar20,plVar11,puVar9 + -0xb0,puVar9 + -0x9c
                           );
      } while (puVar9[-0x9c] != '\0');
      plVar30 = (long *)0xc;
LAB_026e9a64:
      auVar36._8_8_ = plVar17;
      auVar36._0_8_ = &DAT_059df598;
      plVar21 = (long *)0x0;
      puVar25 = (undefined8 *)(puVar9 + -0xc0);
      plVar18 = plVar19;
      goto LAB_026e9a68;
    }
    puVar12 = &DAT_05ab5c10;
  }
  uVar14 = func_0x0249f8f8(puVar12);
  auVar2 = auVar36;
  auVar37 = auVar6;
  if (*(long *)(lVar29 + 0x28) == *(long *)(puVar9 + -0x98)) {
    uVar31 = func_0x04730fcc(uVar14,0);
    uVar14 = func_0x0249fa54(uVar31,plVar21);
    do {
      auVar37._8_8_ = plVar11;
      auVar37._0_8_ = plVar21;
      auVar2 = auVar36;
      if (*(long *)(lVar29 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
      uVar14 = func_0x0249fb88();
      do {
        auVar37._8_8_ = plVar11;
        auVar37._0_8_ = plVar21;
        auVar2 = auVar36;
        if (*(long *)(lVar29 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
        uVar14 = func_0x0249fb88(plVar21);
LAB_026e9c2c:
        auVar37._8_8_ = plVar11;
        auVar37._0_8_ = plVar21;
        auVar2 = auVar36;
        if (*(long *)(lVar29 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
        auVar37 = func_0x0249fb90();
        plVar11 = auVar37._8_8_;
        uVar31 = auVar37._0_8_;
        if (auVar37._8_4_ != 1) {
          func_0x022bd79c(puVar9 + -0xe0);
          if (auVar37._8_4_ != 1) {
            uVar14 = func_0x022bd79c(puVar9 + -0xd0);
            if (*(long *)(lVar29 + 0x28) == *(long *)(puVar9 + -0x98)) {
              uVar14 = func_0x0258f7ac(uVar31);
            }
            goto LAB_026e9cfc;
          }
          puVar25 = (undefined8 *)func_0x054ed080(uVar31);
          *(undefined8 *)(puVar9 + -0xd0) = *puVar25;
          func_0x054ed090();
          goto LAB_026e9ad0;
        }
        puVar25 = (undefined8 *)func_0x054ed080(uVar31);
        plVar21 = (long *)*puVar25;
        *(long **)(puVar9 + -0xe0) = plVar21;
        uVar14 = func_0x054ed090();
        puVar25 = *(undefined8 **)(puVar9 + -0xd8);
        plVar30 = (long *)0x0;
LAB_026e9a68:
        plVar11 = (long *)*puVar25;
        if (plVar11 != (long *)0x0) {
          lVar20 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar14 != 0) {
            piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *auVar36._0_8_) {
                puVar25 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_026e9abc;
              }
              uVar14 = uVar14 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar14 != 0);
          }
          plVar18 = (long *)0x0;
          puVar25 = (undefined8 *)func_0x024d927c(plVar11);
LAB_026e9abc:
          uVar14 = (*(code *)*puVar25)(plVar11,puVar25[1]);
        }
      } while (plVar21 != (long *)0x0);
      if ((int)plVar30 == 0) {
LAB_026e9ad0:
        plVar30 = (long *)0x0;
      }
      plVar21 = (long *)**(undefined8 **)(puVar9 + -200);
      auVar37._8_8_ = plVar11;
      auVar37._0_8_ = plVar21;
      if (plVar21 != (long *)0x0) {
        lVar20 = *plVar21;
        uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar14 != 0) {
          piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *auVar36._0_8_) {
              puVar25 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_026e9b2c;
            }
            uVar14 = uVar14 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar14 != 0);
        }
        plVar18 = (long *)0x0;
        puVar25 = (undefined8 *)func_0x024d927c(plVar21);
LAB_026e9b2c:
        (*(code *)*puVar25)(plVar21,puVar25[1]);
      }
      uVar14 = *(ulong *)(puVar9 + -0xd0);
    } while (uVar14 != 0);
    uVar14 = (ulong)((int)plVar30 != 0xc);
    auVar2 = auVar36;
    if (*(long *)(lVar29 + 0x28) == *(long *)(puVar9 + -0x98)) {
      return uVar14;
    }
  }
LAB_026e9cfc:
  func_0x054ed0f0(uVar14);
  func_0x022bd790();
  plVar32[-0xc] = (long)(puVar9 + -0x90);
  plVar32[-0xb] = 0x26e9d04;
  plVar32[-10] = (long)unaff_x27;
  plVar32[-8] = (long)unaff_x26;
  plVar32[-7] = lVar29;
  *(undefined1 (*) [16])(plVar32 + -6) = auVar2;
  plVar32[-4] = (long)plVar32;
  plVar32[-3] = (long)plVar30;
  plVar32[-2] = auVar37._8_8_;
  plVar32[-1] = auVar37._0_8_;
  lVar29 = tpidr_el0;
  plVar32[-0xd] = *(long *)(lVar29 + 0x28);
  lVar29 = plVar18[7];
  if (lVar29 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar29 = plVar18[7];
    if (lVar29 == 0) {
      func_0x024d8f9c(plVar18);
      lVar29 = plVar18[7];
    }
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar29 + 0x28) + 0xfc);
  plVar32[-0x11] = 0;
  uVar14 = memset((long)plVar32 + (uVar14 + 0xf & 0x1fffffff0) * -2 + -0x90,0,uVar14);
  return uVar14;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar27 = piVar27 + 4;
    if (uVar14 == 0) break;
LAB_026e9a10:
    if (*(long *)(piVar27 + -2) == _DAT_059df6e0) {
      puVar25 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_026e9a44;
    }
  }
LAB_026e9a28:
  plVar19 = (long *)0x0;
  puVar25 = (undefined8 *)func_0x024d927c(plVar17);
LAB_026e9a44:
  uVar14 = (*(code *)*puVar25)(plVar17,puVar25[1]);
  uVar23 = 0xc;
  if ((uVar14 & 1) == 0) {
    uVar23 = 0xe;
  }
  plVar30 = (long *)(ulong)uVar23;
  goto LAB_026e9a64;
}

