/* Ghidra 12.1.2 native pseudocode; RVA 0x666D4C0; MergeEngine.ECS.Systems.Board.ItemCountSystem.TryInvokeItemCountChanged; status ok */


/* WARNING: Possible PIC construction at 0x0676d6b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d6b4) */
/* WARNING: Removing unreachable block (ram,0x0676d728) */
/* WARNING: Removing unreachable block (ram,0x0676d6b8) */

ulong MergeEngine_ECS_Systems_Board_ItemCountSystem__TryInvokeItemCountChanged
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  uint auStack_54 [3];
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000007e28106 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808078);
    func_0x03280a18(PTR_DAT_077f1c68);
    bRam0000000007e28106 = 1;
  }
  puVar1 = PTR_DAT_07808078;
  uStack_28 = 0;
  puVar4 = (undefined *)0x7e28000;
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x04fb40cc(*(long *)(param_1 + 0x50),param_2,(long)&uStack_28 + 4,
                    *(undefined8 *)PTR_DAT_07808078);
    puVar4 = puVar1;
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar2 = func_0x04fb40cc(*(long *)(param_1 + 0x58),param_2,&uStack_28,*(undefined8 *)puVar1);
      if ((int)uStack_28 != uStack_28._4_4_) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_0676d5bc;
        uVar2 = func_0x04fb25d8(*(long *)(param_1 + 0x50),param_2,uStack_28 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_077f1c68);
        lVar3 = *(long *)(param_1 + 0x60);
        if (lVar3 != 0) {
          uVar2 = (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),param_2,uStack_28 & 0xffffffff,
                             *(undefined8 *)(lVar3 + 0x28));
        }
      }
      if ((uStack_28._4_4_ < (int)uStack_28) && (lVar3 = *(long *)(param_1 + 0x68), lVar3 != 0)) {
        uVar2 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),param_2,uStack_28 & 0xffffffff,
                           *(undefined8 *)(lVar3 + 0x28));
      }
      return uVar2;
    }
  }
LAB_0676d5bc:
  auVar5 = func_0x03280cac();
  auStack_54[1] = 0x676d5c0;
  auStack_54[2] = 0;
  puStack_48 = puVar4;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000007e28107 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808078);
    bRam0000000007e28107 = 1;
  }
  auStack_54[0] = 0;
  lVar3 = *(long *)(auVar5._0_8_ + 0x50);
  if (lVar3 != 0) {
    func_0x04fb40cc(lVar3,auVar5._8_8_,auStack_54,*(undefined8 *)PTR_DAT_07808078);
    return (ulong)auStack_54[0];
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07808080;
  if ((bRam0000000007e28108 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808088);
    func_0x03280a18(PTR_DAT_07808090);
    func_0x03280a18(PTR_DAT_07808098);
    func_0x03280a18(PTR_DAT_078080a0);
    func_0x03280a18(PTR_DAT_07808080);
    bRam0000000007e28108 = 1;
  }
  uVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
  return uVar2;
}

