/* Ghidra 12.1.2 native pseudocode; RVA 0x668FA80; Merger.Game.Views.BoardUIView.StopInventoryButtonHinting; status ok */


void Merger_Game_Views_BoardUIView__StopInventoryButtonHinting(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x80) == 0)) {
    return;
  }
  func_0x038ee7ac(lVar1,0);
  func_0x038eedf4(*(undefined8 *)(param_1 + 0x78),0,0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  func_0x032809c4((long *)(param_1 + 0x78),0);
  puVar3 = (undefined8 *)(param_1 + 0x80);
  func_0x038ee7ac(*puVar3,0);
  func_0x038eedf4(*puVar3,0,0);
  *puVar3 = 0;
  func_0x032809c4(puVar3,0);
  lVar1 = *(long *)(param_1 + 0x38);
  if (cRam0000000007e16029 == '\0') {
    func_0x03280a18(PTR_DAT_0774fd60);
    cRam0000000007e16029 = '\x01';
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_0774fd60 + 0xb8);
    uStack_2c = *(undefined4 *)(lVar2 + 0x10);
    uStack_28 = *(undefined4 *)(lVar2 + 0x14);
    uStack_30 = *(undefined4 *)(lVar2 + 0xc);
    if (pcRam0000000007e30460 == (code *)0x0) {
      pcRam0000000007e30460 = (code *)func_0x032809dc(&UNK_017b400a,0);
    }
    (*pcRam0000000007e30460)(lVar1,&uStack_30);
    return;
  }
  auVar4 = func_0x03280cac();
  lVar1 = *(long *)(auVar4._0_8_ + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678fb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),auVar4._8_8_,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

