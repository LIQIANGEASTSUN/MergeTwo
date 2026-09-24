
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01bc3ea4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01bc40ac + 0x1bc3ebc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc40b0 + 0x1bc3ed0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc40b4 + 0x1bc3edc));
    func_0x01438628(*(undefined4 *)(_UNK_01bc40b8 + 0x1bc3ee8));
    func_0x01438628(*(undefined4 *)(_UNK_01bc40bc + 0x1bc3ef4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc40c0 + 0x1bc3f00));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x364a,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_01bc40c4 + 0x1bc3f5c);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar7 = *(undefined4 **)(_UNK_01bc40c8 + 0x1bc3f78);
    iVar1 = func_0x014e9518(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar1 = 0;
    }
    else {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_01bc40cc + 0x1bc3fe4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      fVar9 = *(float *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_01bc40d0 + 0x1bc4008) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bc40d4 + 0x1bc4028));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e61a4(fVar9);
      iVar6 = func_0x014e6220(fVar9);
      if (fVar9 < 0.0) {
        iVar6 = iVar2;
      }
      iVar1 = func_0x026ffbe0(iVar1,0);
      iVar1 = (iVar6 * 3600000 - iVar1) + *(int *)(param_1 + 0x18);
    }
    return iVar1;
  }
  iVar1 = func_0x029540a4(0x364a,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar3,0,0);
  iVar1 = func_0x024f5770(&uStack_30,0,0);
  return iVar1;
}

