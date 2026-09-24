/* Ghidra 12.1.2 native pseudocode; RVA 0x601EEFC; GameCore.Configuration.Definitions.BaseReward.get_Amount; status ok */


/* WARNING: Possible PIC construction at 0x0611ef68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0611ef6c) */
/* WARNING: Removing unreachable block (ram,0x0611ef80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * GameCore_Configuration_Definitions_BaseReward__get_Amount(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined8 uStack_30;
  
  if ((bRam0000000007e2385b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773188);
    bRam0000000007e2385b = 1;
  }
  plVar9 = (long *)(param_1 + 0x20);
  lVar5 = *plVar9;
  if (lVar5 == 0) {
    lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07773188);
    func_0x057da5fc(lVar5,0);
    uVar7 = _UNK_017bfc38;
    uVar6 = _UNK_017bfc30;
    *(undefined4 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x18) = uVar7;
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *plVar9 = lVar5;
  }
  else {
    if (*(int *)(lVar5 + 0x10) == 0) {
      return (long *)(ulong)*(uint *)(lVar5 + 0x14);
    }
    func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar6 = func_0x03280ca0();
    uVar7 = func_0x03280a2c(PTR_DAT_077d0120);
    func_0x057ced78(uVar6,uVar7,0);
    uVar7 = func_0x03280a2c(PTR_DAT_077d0128);
    auVar10 = func_0x03280b7c(uVar6,uVar7);
    puVar4 = &uStack_30;
    uStack_30 = 0x611f034;
    if ((bRam0000000007e2385c & 1) == 0) {
      func_0x03280a18(PTR_DAT_07773188);
      bRam0000000007e2385c = 1;
    }
    plVar9 = (long *)(auVar10._0_8_ + 0x20);
    lVar5 = *plVar9;
    auVar11._8_4_ = auVar10._8_4_;
    auVar11._0_8_ = lVar5;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x10) == 0) {
        puVar4 = (undefined8 *)&stack0xfffffffffffffff0;
        uVar7 = uStack_30;
      }
      else {
        func_0x03280a2c(PTR_DAT_0774e4d8);
        uVar6 = func_0x03280ca0();
        uVar7 = func_0x03280a2c(PTR_DAT_077d0130);
        func_0x057ced78(uVar6,uVar7,0);
        uVar8 = func_0x03280a2c(PTR_DAT_077d0138);
        uVar7 = 0x611f10c;
        auVar11 = func_0x03280b7c(uVar6,uVar8);
      }
      plVar9 = auVar11._0_8_;
      *(undefined8 *)((long)puVar4 + -0x10) = uVar7;
      *(undefined8 *)((long)puVar4 + -8) = uVar6;
      if ((int)plVar9[2] == 0) {
        *(int *)((long)plVar9 + 0x14) = auVar11._8_4_;
        return plVar9;
      }
      func_0x03280a2c(PTR_DAT_0774e4d8);
      uVar6 = func_0x03280ca0();
      uVar7 = func_0x03280a2c(PTR_DAT_077d0130);
      func_0x057ced78(uVar6,uVar7,0);
      uVar7 = func_0x03280a2c(PTR_DAT_077d0140);
      lVar5 = func_0x03280b7c(uVar6,uVar7);
      return *(long **)(lVar5 + 0x28);
    }
    lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07773188);
    func_0x057da5fc(lVar5,0);
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(int *)(lVar5 + 0x14) = auVar10._8_4_;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x20) = 0;
    *plVar9 = lVar5;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar9;
}

