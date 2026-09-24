
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f41d8(void)

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
  
  pcVar2 = (char *)(_UNK_016f448c + 0x16f41ec);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f4490 + 0x16f4200));
    func_0x01438628(*(undefined4 *)(_UNK_016f4494 + 0x16f420c));
    func_0x01438628(*(undefined4 *)(_UNK_016f4498 + 0x16f4218));
    func_0x01438628(*(undefined4 *)(_UNK_016f449c + 0x16f4224));
    func_0x01438628(*(undefined4 *)(_UNK_016f44a0 + 0x16f4230));
    func_0x01438628(*(undefined4 *)(_UNK_016f44a4 + 0x16f423c));
    func_0x01438628(*(undefined4 *)(_UNK_016f44a8 + 0x16f4248));
    func_0x01438628(*(undefined4 *)(_UNK_016f44ac + 0x16f4254));
    func_0x01438628(*(undefined4 *)(_UNK_016f44b0 + 0x16f4260));
    func_0x01438628(*(undefined4 *)(_UNK_016f44b4 + 0x16f426c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8aa8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8aa8,0);
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
  if (*(int *)(**(int **)(_UNK_016f44b8 + 0x16f42c4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f44bc + 0x16f42e0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_016f44c0 + 0x16f4304);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 700);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016f44c4 + 0x16f4334));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f44c8 + 0x16f434c));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_016f44cc + 0x16f4364));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_016f44d0 + 0x16f4390);
    puVar7 = *(undefined4 **)(_UNK_016f44d4 + 0x16f4398);
    piVar8 = *(int **)(_UNK_016f44d8 + 0x16f43a0);
    do {
      if (*(int *)(**(int **)(_UNK_016f44dc + 0x16f43a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016f44e0 + 0x16f43c4));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 700);
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
      iVar6 = FUN_016f4018(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_016f4124(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

