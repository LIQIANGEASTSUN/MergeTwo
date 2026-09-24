
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01647c00(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01647eb4 + 0x1647c14);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01647eb8 + 0x1647c28));
    func_0x01438628(*(undefined4 *)(_UNK_01647ebc + 0x1647c34));
    func_0x01438628(*(undefined4 *)(_UNK_01647ec0 + 0x1647c40));
    func_0x01438628(*(undefined4 *)(_UNK_01647ec4 + 0x1647c4c));
    func_0x01438628(*(undefined4 *)(_UNK_01647ec8 + 0x1647c58));
    func_0x01438628(*(undefined4 *)(_UNK_01647ecc + 0x1647c64));
    func_0x01438628(*(undefined4 *)(_UNK_01647ed0 + 0x1647c70));
    func_0x01438628(*(undefined4 *)(_UNK_01647ed4 + 0x1647c7c));
    func_0x01438628(*(undefined4 *)(_UNK_01647ed8 + 0x1647c88));
    func_0x01438628(*(undefined4 *)(_UNK_01647edc + 0x1647c94));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8624,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8624,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01647ee0 + 0x1647cec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01647ee4 + 0x1647d08));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01647ee8 + 0x1647d2c);
  iVar1 = func_0x024f04cc(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3a4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01647eec + 0x1647d5c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01647ef0 + 0x1647d74));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01647ef4 + 0x1647d8c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01647ef8 + 0x1647db8);
    puVar7 = *(undefined4 **)(_UNK_01647efc + 0x1647dc0);
    piVar8 = *(int **)(_UNK_01647f00 + 0x1647dc8);
    do {
      if (*(int *)(**(int **)(_UNK_01647f04 + 0x1647dd0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01647f08 + 0x1647dec));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x024f04cc(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x3a4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f04d4(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_01647a40(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_01647b4c(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

