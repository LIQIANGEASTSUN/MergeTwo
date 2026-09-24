/* Ghidra 12.1.2 native pseudocode; RVA 0x665A3F8; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.TryShowProducerHint; status ok */


/* WARNING: Possible PIC construction at 0x0675a4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675ab50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675ac4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675ac50) */
/* WARNING: Removing unreachable block (ram,0x0675ac54) */
/* WARNING: Removing unreachable block (ram,0x0675ac68) */
/* WARNING: Removing unreachable block (ram,0x0675ab54) */
/* WARNING: Removing unreachable block (ram,0x0675ab58) */
/* WARNING: Removing unreachable block (ram,0x0675ab74) */
/* WARNING: Removing unreachable block (ram,0x0675ac74) */
/* WARNING: Removing unreachable block (ram,0x0675ab84) */
/* WARNING: Removing unreachable block (ram,0x0675ac84) */
/* WARNING: Removing unreachable block (ram,0x0675acb4) */
/* WARNING: Removing unreachable block (ram,0x0675acf8) */
/* WARNING: Removing unreachable block (ram,0x0675ab8c) */
/* WARNING: Removing unreachable block (ram,0x0675abac) */
/* WARNING: Removing unreachable block (ram,0x0675abb4) */
/* WARNING: Removing unreachable block (ram,0x0675abd8) */
/* WARNING: Removing unreachable block (ram,0x0675abc0) */
/* WARNING: Removing unreachable block (ram,0x0675abcc) */
/* WARNING: Removing unreachable block (ram,0x0675abe8) */
/* WARNING: Removing unreachable block (ram,0x0675a4b4) */
/* WARNING: Removing unreachable block (ram,0x0675a4b8) */
/* WARNING: Removing unreachable block (ram,0x0675a4cc) */
/* WARNING: Removing unreachable block (ram,0x0675a4f4) */
/* WARNING: Removing unreachable block (ram,0x0675a50c) */
/* WARNING: Removing unreachable block (ram,0x0675a510) */
/* WARNING: Removing unreachable block (ram,0x0675a524) */
/* WARNING: Removing unreachable block (ram,0x0675a52c) */
/* WARNING: Removing unreachable block (ram,0x0675a5d0) */
/* WARNING: Removing unreachable block (ram,0x0675a540) */
/* WARNING: Removing unreachable block (ram,0x0675a548) */
/* WARNING: Removing unreachable block (ram,0x0675a558) */
/* WARNING: Removing unreachable block (ram,0x0675a57c) */
/* WARNING: Removing unreachable block (ram,0x0675a584) */
/* WARNING: Removing unreachable block (ram,0x0675a5a0) */
/* WARNING: Removing unreachable block (ram,0x0675a5a8) */
/* WARNING: Removing unreachable block (ram,0x0675a5ec) */
/* WARNING: Removing unreachable block (ram,0x0675a5b4) */
/* WARNING: Removing unreachable block (ram,0x0675a5c0) */
/* WARNING: Removing unreachable block (ram,0x0675a5fc) */
/* WARNING: Removing unreachable block (ram,0x0675a610) */
/* WARNING: Removing unreachable block (ram,0x0675a62c) */
/* WARNING: Removing unreachable block (ram,0x0675a634) */
/* WARNING: Removing unreachable block (ram,0x0675a65c) */
/* WARNING: Removing unreachable block (ram,0x0675a640) */
/* WARNING: Removing unreachable block (ram,0x0675a64c) */
/* WARNING: Removing unreachable block (ram,0x0675a668) */
/* WARNING: Removing unreachable block (ram,0x0675a678) */
/* WARNING: Removing unreachable block (ram,0x0675a734) */
/* WARNING: Removing unreachable block (ram,0x0675a6f8) */
/* WARNING: Removing unreachable block (ram,0x0675aac8) */
/* WARNING: Removing unreachable block (ram,0x0675aaf0) */
/* WARNING: Removing unreachable block (ram,0x0675ab40) */
/* WARNING: Removing unreachable block (ram,0x0675ad0c) */
/* WARNING: Removing unreachable block (ram,0x0675ad10) */
/* WARNING: Removing unreachable block (ram,0x0675adfc) */
/* WARNING: Removing unreachable block (ram,0x0675ad28) */
/* WARNING: Removing unreachable block (ram,0x0675ad60) */
/* WARNING: Removing unreachable block (ram,0x0675ad68) */
/* WARNING: Removing unreachable block (ram,0x0675ad8c) */
/* WARNING: Removing unreachable block (ram,0x0675ad74) */
/* WARNING: Removing unreachable block (ram,0x0675ad80) */
/* WARNING: Removing unreachable block (ram,0x0675ad9c) */
/* WARNING: Removing unreachable block (ram,0x03d45130) */
/* WARNING: Removing unreachable block (ram,0x03d45150) */
/* WARNING: Removing unreachable block (ram,0x03d45170) */
/* WARNING: Removing unreachable block (ram,0x03d45178) */
/* WARNING: Removing unreachable block (ram,0x03d45390) */
/* WARNING: Removing unreachable block (ram,0x03d4517c) */
/* WARNING: Removing unreachable block (ram,0x03d4539c) */
/* WARNING: Removing unreachable block (ram,0x03d453a4) */
/* WARNING: Removing unreachable block (ram,0x03d45180) */
/* WARNING: Removing unreachable block (ram,0x03d45190) */
/* WARNING: Removing unreachable block (ram,0x03d4519c) */
/* WARNING: Removing unreachable block (ram,0x03d451a8) */
/* WARNING: Removing unreachable block (ram,0x03d451b0) */
/* WARNING: Removing unreachable block (ram,0x03d451d8) */
/* WARNING: Removing unreachable block (ram,0x03d451bc) */
/* WARNING: Removing unreachable block (ram,0x03d451c8) */
/* WARNING: Removing unreachable block (ram,0x03d451e4) */
/* WARNING: Removing unreachable block (ram,0x03d453b8) */
/* WARNING: Removing unreachable block (ram,0x03d451f8) */
/* WARNING: Removing unreachable block (ram,0x03d45200) */
/* WARNING: Removing unreachable block (ram,0x03d45210) */
/* WARNING: Removing unreachable block (ram,0x03d45218) */
/* WARNING: Removing unreachable block (ram,0x03d45240) */
/* WARNING: Removing unreachable block (ram,0x03d45224) */
/* WARNING: Removing unreachable block (ram,0x03d45230) */
/* WARNING: Removing unreachable block (ram,0x03d4524c) */
/* WARNING: Removing unreachable block (ram,0x03d452f8) */
/* WARNING: Removing unreachable block (ram,0x03d4525c) */
/* WARNING: Removing unreachable block (ram,0x03d4526c) */
/* WARNING: Removing unreachable block (ram,0x03d45278) */
/* WARNING: Removing unreachable block (ram,0x03d45284) */
/* WARNING: Removing unreachable block (ram,0x03d4528c) */
/* WARNING: Removing unreachable block (ram,0x03d452b4) */
/* WARNING: Removing unreachable block (ram,0x03d45298) */
/* WARNING: Removing unreachable block (ram,0x03d452a4) */
/* WARNING: Removing unreachable block (ram,0x03d452c0) */
/* WARNING: Removing unreachable block (ram,0x03d452e8) */
/* WARNING: Removing unreachable block (ram,0x03d452f4) */
/* WARNING: Removing unreachable block (ram,0x03d45368) */
/* WARNING: Removing unreachable block (ram,0x03d453bc) */
/* WARNING: Removing unreachable block (ram,0x03d453d0) */
/* WARNING: Removing unreachable block (ram,0x03d453fc) */
/* WARNING: Removing unreachable block (ram,0x03d45408) */
/* WARNING: Removing unreachable block (ram,0x03d4540c) */
/* WARNING: Removing unreachable block (ram,0x03d45424) */
/* WARNING: Removing unreachable block (ram,0x03d4542c) */
/* WARNING: Removing unreachable block (ram,0x03d45454) */
/* WARNING: Removing unreachable block (ram,0x03d45438) */
/* WARNING: Removing unreachable block (ram,0x03d45444) */
/* WARNING: Removing unreachable block (ram,0x03d45460) */
/* WARNING: Removing unreachable block (ram,0x03d4546c) */
/* WARNING: Removing unreachable block (ram,0x03d45470) */
/* WARNING: Removing unreachable block (ram,0x03d45478) */
/* WARNING: Removing unreachable block (ram,0x03d454c8) */
/* WARNING: Removing unreachable block (ram,0x03d454e8) */
/* WARNING: Removing unreachable block (ram,0x03d454f4) */
/* WARNING: Removing unreachable block (ram,0x03d4584c) */
/* WARNING: Removing unreachable block (ram,0x03d45574) */
/* WARNING: Removing unreachable block (ram,0x03d45858) */
/* WARNING: Removing unreachable block (ram,0x03d45860) */
/* WARNING: Removing unreachable block (ram,0x03d45578) */
/* WARNING: Removing unreachable block (ram,0x03d45584) */
/* WARNING: Removing unreachable block (ram,0x03d45590) */
/* WARNING: Removing unreachable block (ram,0x03d4559c) */
/* WARNING: Removing unreachable block (ram,0x03d455a4) */
/* WARNING: Removing unreachable block (ram,0x03d455cc) */
/* WARNING: Removing unreachable block (ram,0x03d455b0) */
/* WARNING: Removing unreachable block (ram,0x03d455bc) */
/* WARNING: Removing unreachable block (ram,0x03d455d8) */
/* WARNING: Removing unreachable block (ram,0x03d45874) */
/* WARNING: Removing unreachable block (ram,0x03d455ec) */
/* WARNING: Removing unreachable block (ram,0x03d455f4) */
/* WARNING: Removing unreachable block (ram,0x03d45604) */
/* WARNING: Removing unreachable block (ram,0x03d4560c) */
/* WARNING: Removing unreachable block (ram,0x03d45634) */
/* WARNING: Removing unreachable block (ram,0x03d45618) */
/* WARNING: Removing unreachable block (ram,0x03d45624) */
/* WARNING: Removing unreachable block (ram,0x03d45640) */
/* WARNING: Removing unreachable block (ram,0x03d45760) */
/* WARNING: Removing unreachable block (ram,0x03d45650) */
/* WARNING: Removing unreachable block (ram,0x03d45660) */
/* WARNING: Removing unreachable block (ram,0x03d4566c) */
/* WARNING: Removing unreachable block (ram,0x03d45678) */
/* WARNING: Removing unreachable block (ram,0x03d45680) */
/* WARNING: Removing unreachable block (ram,0x03d456a8) */
/* WARNING: Removing unreachable block (ram,0x03d4568c) */
/* WARNING: Removing unreachable block (ram,0x03d45698) */
/* WARNING: Removing unreachable block (ram,0x03d456b4) */
/* WARNING: Removing unreachable block (ram,0x03d45704) */
/* WARNING: Removing unreachable block (ram,0x03d45708) */
/* WARNING: Removing unreachable block (ram,0x03d45730) */
/* WARNING: Removing unreachable block (ram,0x03d4575c) */
/* WARNING: Removing unreachable block (ram,0x03d457cc) */
/* WARNING: Removing unreachable block (ram,0x03d45878) */
/* WARNING: Removing unreachable block (ram,0x03d457d0) */
/* WARNING: Removing unreachable block (ram,0x03d457d8) */
/* WARNING: Removing unreachable block (ram,0x03d457e0) */
/* WARNING: Removing unreachable block (ram,0x03d457e4) */
/* WARNING: Removing unreachable block (ram,0x03d457f8) */
/* WARNING: Removing unreachable block (ram,0x03d45818) */
/* WARNING: Removing unreachable block (ram,0x03d45880) */
/* WARNING: Removing unreachable block (ram,0x03d45890) */
/* WARNING: Removing unreachable block (ram,0x03d458b8) */
/* WARNING: Removing unreachable block (ram,0x03d458c4) */
/* WARNING: Removing unreachable block (ram,0x03d458c8) */
/* WARNING: Removing unreachable block (ram,0x03d458e0) */
/* WARNING: Removing unreachable block (ram,0x03d458e8) */
/* WARNING: Removing unreachable block (ram,0x03d45910) */
/* WARNING: Removing unreachable block (ram,0x03d458f4) */
/* WARNING: Removing unreachable block (ram,0x03d45900) */
/* WARNING: Removing unreachable block (ram,0x03d4591c) */
/* WARNING: Removing unreachable block (ram,0x03d45928) */
/* WARNING: Removing unreachable block (ram,0x03d4592c) */
/* WARNING: Removing unreachable block (ram,0x03d45934) */
/* WARNING: Removing unreachable block (ram,0x03d45960) */
/* WARNING: Removing unreachable block (ram,0x03d4596c) */
/* WARNING: Removing unreachable block (ram,0x03d45988) */
/* WARNING: Removing unreachable block (ram,0x03d45994) */
/* WARNING: Removing unreachable block (ram,0x03d4589c) */
/* WARNING: Removing unreachable block (ram,0x03d4576c) */
/* WARNING: Removing unreachable block (ram,0x03d45784) */
/* WARNING: Removing unreachable block (ram,0x03d4578c) */
/* WARNING: Removing unreachable block (ram,0x03d457b4) */
/* WARNING: Removing unreachable block (ram,0x03d45798) */
/* WARNING: Removing unreachable block (ram,0x03d457a4) */
/* WARNING: Removing unreachable block (ram,0x03d457c0) */
/* WARNING: Removing unreachable block (ram,0x03d458b4) */
/* WARNING: Removing unreachable block (ram,0x03d4582c) */
/* WARNING: Removing unreachable block (ram,0x03d453dc) */
/* WARNING: Removing unreachable block (ram,0x03d45308) */
/* WARNING: Removing unreachable block (ram,0x03d45320) */
/* WARNING: Removing unreachable block (ram,0x03d45328) */
/* WARNING: Removing unreachable block (ram,0x03d45350) */
/* WARNING: Removing unreachable block (ram,0x03d45334) */
/* WARNING: Removing unreachable block (ram,0x03d45340) */
/* WARNING: Removing unreachable block (ram,0x03d4535c) */
/* WARNING: Removing unreachable block (ram,0x03d453f8) */
/* WARNING: Removing unreachable block (ram,0x03d4536c) */
/* WARNING: Removing unreachable block (ram,0x03d45374) */
/* WARNING: Removing unreachable block (ram,0x03d45378) */
/* WARNING: Removing unreachable block (ram,0x03d4537c) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TryShowProducerHint(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07807860;
  if ((bRam0000000007e2805f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07807868);
    func_0x03280a18(PTR_DAT_07807870);
    func_0x03280a18(PTR_DAT_07807878);
    func_0x03280a18(PTR_DAT_07807860);
    bRam0000000007e2805f = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

