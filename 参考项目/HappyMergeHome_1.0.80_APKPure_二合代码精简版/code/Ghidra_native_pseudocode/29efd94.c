
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029ffd94(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02a000b8 + 0x29ffda8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a000bc + 0x29ffdbc));
    func_0x01438628(*(undefined4 *)(_UNK_02a000c0 + 0x29ffdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02a000c4 + 0x29ffdd4));
    func_0x01438628(*(undefined4 *)(_UNK_02a000c8 + 0x29ffde0));
    func_0x01438628(*(undefined4 *)(_UNK_02a000cc + 0x29ffdec));
    func_0x01438628(*(undefined4 *)(_UNK_02a000d0 + 0x29ffdf8));
    func_0x01438628(*(undefined4 *)(_UNK_02a000d4 + 0x29ffe04));
    func_0x01438628(*(undefined4 *)(_UNK_02a000d8 + 0x29ffe10));
    func_0x01438628(*(undefined4 *)(_UNK_02a000dc + 0x29ffe1c));
    func_0x01438628(*(undefined4 *)(_UNK_02a000e0 + 0x29ffe28));
    func_0x01438628(*(undefined4 *)(_UNK_02a000e4 + 0x29ffe34));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2648,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2648,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  piVar7 = *(int **)(_UNK_02a000e8 + 0x29ffe8c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02a000ec + 0x29ffea8);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_02a000f0 + 0x29ffecc);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x164);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02a000f4 + 0x29ffefc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02a000f8 + 0x29fff14));
  func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_02a000fc + 0x29fff2c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_02a00100 + 0x29fff58);
    do {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(*puVar8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x164);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x0152983c(iVar1,uVar5,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar6,uVar2,**(undefined4 **)(_UNK_02a00104 + 0x29fffdc));
      if (*(int *)(**(int **)(_UNK_02a00108 + 0x29ffff4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x02a01410(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar8);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x036c7bec(iVar6,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x164);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar5,*puVar10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x03b73bf8(iVar6,uVar2,**(undefined4 **)(_UNK_02a0010c + 0x2a0009c));
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

