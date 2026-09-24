/* Ghidra 12.1.2 native pseudocode; RVA 0x668EACC; Merger.Game.Views.BoardItemViewBase.OnEnable; status ok */


void Merger_Game_Views_BoardItemViewBase__OnEnable(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000007e28284 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e28284 = 1;
  }
  lVar3 = func_0x069aaf28(param_1,0);
  if (cRam0000000007e136dc == '\0') {
    func_0x03280a18(PTR_DAT_077500e8);
    cRam0000000007e136dc = '\x01';
  }
  puVar2 = PTR_DAT_07809140;
  puVar1 = PTR_DAT_07809138;
  if (lVar3 != 0) {
    func_0x06fe97f4(**(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8),
                    (*(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8))[1],lVar3,0);
    uVar4 = func_0x06fdbed0(param_1,0);
    func_0x03e90108(uVar4,*(undefined8 *)puVar2);
    uVar4 = func_0x06fdbed0(param_1,0);
    func_0x03e90108(uVar4,*(undefined8 *)puVar1);
    lVar3 = func_0x06fdbe94(param_1,0);
    if (cRam0000000007e16029 == '\0') {
      func_0x03280a18(PTR_DAT_0774fd60);
      cRam0000000007e16029 = '\x01';
    }
    if (lVar3 != 0) {
      if (pcRam0000000007e30460 == (code *)0x0) {
        pcRam0000000007e30460 = (code *)func_0x032809dc(&UNK_017b400a,0);
      }
      (*pcRam0000000007e30460)(lVar3,&stack0xffffffffffffffd0);
      return;
    }
  }
  lVar3 = func_0x03280cac();
  if (*(char *)(lVar3 + 0x70) == '\0') {
    plVar5 = *(long **)(lVar3 + 0x28);
    if (plVar5 == (long *)0x0) {
      lVar3 = func_0x03280cac();
      lVar7 = *(long *)(lVar3 + 0x48);
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678ec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),lVar3,*(undefined8 *)(lVar7 + 0x28));
        return;
      }
      return;
    }
    uVar6 = (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(*plVar5 + 0x2c0));
    if (((uVar6 & 1) != 0) && (lVar7 = *(long *)(lVar3 + 0x48), lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0678ec44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),lVar3,*(undefined8 *)(lVar7 + 0x28))
      ;
      return;
    }
  }
  return;
}

