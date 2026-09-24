// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemChargeableContainer.SelectItemToSpawn 0x110770C; ItemChargeableContainer.SelectItemToSpawn (candidate)
// Image base: 0x10000; Ghidra address: 0111770c; native size hint: 0x254


undefined4 ItemChargeableContainer_SelectItemToSpawn_0110770C(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float *pfVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uStack_38;
  char cStack_31;
  
  pcVar6 = (char *)(iRam0111793c + 0x111772c);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01117940 + 0x1117740));
    func_0x00f6b160(*(undefined4 *)(iRam01117944 + 0x111774c));
    func_0x00f6b160(*(undefined4 *)(iRam01117948 + 0x1117758));
    func_0x00f6b160(*(undefined4 *)(iRam0111794c + 0x1117764));
    *pcVar6 = '\x01';
  }
  cStack_31 = '\0';
  uStack_38 = 0;
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam01117950 + 0x111777c));
  func_0x01118428(iVar1,0);
  iVar7 = *(int *)(param_1 + 0xac);
  if (iVar7 == 0) {
    func_0x00f6b3d0();
  }
  if (*(int *)(iVar7 + 0xc) == 0) {
    func_0x00f6b3d4();
  }
  iVar7 = *(int *)(iVar7 + 0x10);
  if (iVar7 == 0) {
    func_0x00f6b3d0();
  }
  uVar9 = *(undefined4 *)(iVar7 + 0x18);
  uVar8 = 0;
  cStack_31 = '\0';
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  puVar2 = *(undefined4 **)(iRam01117954 + 0x11177e8);
  uVar10 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar3 = func_0x00f6b3c4(*puVar2);
  func_0x025b80b8(uVar3,iVar1,**(undefined4 **)(iRam01117958 + 0x111780c),0);
  func_0x01b3c964(uVar10,uVar3,**(undefined4 **)(iRam0111795c + 0x1117824));
  fVar4 = (float)func_0x020082b4(0);
  iVar7 = 0x10;
  fVar4 = fVar4 * *(float *)(iVar1 + 8);
  fVar11 = fRam01117938;
  do {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar8) {
      uVar3 = 4;
LAB_011178e4:
      func_0x0108ebb4(uVar3,0);
      return uVar9;
    }
    iVar1 = *(int *)(param_1 + 0xb0);
    if (fVar11 <= fVar4) {
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x00f6b3d4();
      }
      if (fVar4 <= fVar11 + *(float *)(iVar1 + iVar7)) {
        iVar1 = func_0x01117960(param_1,uVar8,&uStack_38,&cStack_31,param_2);
        if (iVar1 != 0) {
          return uStack_38;
        }
        uVar3 = 7;
        if (cStack_31 == '\0') {
          uVar3 = 4;
        }
        goto LAB_011178e4;
      }
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x00f6b3d4();
    }
    pfVar5 = (float *)(iVar1 + iVar7);
    iVar7 = iVar7 + 4;
    uVar8 = uVar8 + 1;
    fVar11 = fVar11 + *pfVar5;
  } while( true );
}

