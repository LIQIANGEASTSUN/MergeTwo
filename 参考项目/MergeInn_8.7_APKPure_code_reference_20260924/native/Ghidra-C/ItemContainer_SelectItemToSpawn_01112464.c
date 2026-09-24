// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainer.SelectItemToSpawn 0x1112464; protected virtual ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
// Image base: 0x10000; Ghidra address: 01122464; native size hint: 0x4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemContainer_SelectItemToSpawn_01112464(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float *pfVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uStack_38;
  char cStack_31;
  
  pcVar7 = (char *)(_UNK_01122738 + 0x1122484);
  if (*pcVar7 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_0112273c + 0x1122498));
    func_0x00f6b160(*(undefined4 *)(_UNK_01122740 + 0x11224a4));
    func_0x00f6b160(*(undefined4 *)(_UNK_01122744 + 0x11224b0));
    func_0x00f6b160(*(undefined4 *)(_UNK_01122748 + 0x11224bc));
    *pcVar7 = '\x01';
  }
  cStack_31 = '\0';
  uStack_38 = 0;
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(_UNK_0112274c + 0x11224d4));
  func_0x030a53ec(iVar1,0);
  if (*(char *)(param_1 + 0x32) != '\0') {
    iVar8 = *(int *)(param_1 + 0xb4);
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 != 0) {
      iVar8 = func_0x01122764(iVar8,*(undefined4 *)(param_1 + 0x34));
      iVar9 = *(int *)(param_1 + 0xb4);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar8 < iVar9) {
        uVar2 = func_0x01122764(iVar9,*(undefined4 *)(param_1 + 0x34));
        func_0x01122818(uVar2,*(undefined4 *)(param_1 + 0x34),uVar2 + 1);
        iVar1 = *(int *)(param_1 + 0xb4);
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar2) {
          func_0x00f6b3d4();
        }
        iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        return *(undefined4 *)(iVar1 + 0x18);
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0xb0);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  if (*(int *)(iVar8 + 0xc) == 0) {
    func_0x00f6b3d4();
  }
  iVar8 = *(int *)(iVar8 + 0x10);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  uVar10 = *(undefined4 *)(iVar8 + 0x18);
  uVar2 = 0;
  cStack_31 = '\0';
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  puVar3 = *(undefined4 **)(_UNK_01122750 + 0x11225e4);
  uVar11 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar4 = func_0x00f6b3c4(*puVar3);
  func_0x025b80b8(uVar4,iVar1,**(undefined4 **)(_UNK_01122754 + 0x1122608),0);
  func_0x01b3c964(uVar11,uVar4,**(undefined4 **)(_UNK_01122758 + 0x1122620));
  fVar5 = (float)func_0x020082b4(0);
  iVar8 = 0x10;
  fVar5 = fVar5 * *(float *)(iVar1 + 8);
  fVar12 = _UNK_01122734;
  do {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar2) {
      uVar4 = 4;
LAB_011226e0:
      func_0x0108ebb4(uVar4,0);
      return uVar10;
    }
    iVar1 = *(int *)(param_1 + 0xb8);
    if (fVar12 <= fVar5) {
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x00f6b3d4();
      }
      if (fVar5 <= fVar12 + *(float *)(iVar1 + iVar8)) {
        iVar1 = func_0x011228d0(param_1,uVar2,&uStack_38,&cStack_31,param_2);
        if (iVar1 != 0) {
          return uStack_38;
        }
        uVar4 = 7;
        if (cStack_31 == '\0') {
          uVar4 = 4;
        }
        goto LAB_011226e0;
      }
      iVar1 = *(int *)(param_1 + 0xb8);
    }
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x00f6b3d4();
    }
    pfVar6 = (float *)(iVar1 + iVar8);
    iVar8 = iVar8 + 4;
    uVar2 = uVar2 + 1;
    fVar12 = fVar12 + *pfVar6;
  } while( true );
}

