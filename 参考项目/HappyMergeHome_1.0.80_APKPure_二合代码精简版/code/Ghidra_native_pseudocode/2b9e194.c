
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bae194(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bae3c8 + 0x2bae1ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bae3cc + 0x2bae1c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bae3d0 + 0x2bae1cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bae3d4 + 0x2bae1d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bae3d8 + 0x2bae1e4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x5cc8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cc8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = func_0x02bae3f4(param_1,param_2);
  if (iVar1 == 0) {
    uVar5 = func_0x02bae5d4(param_1);
    uVar5 = uVar5 ^ 1;
  }
  if (*(int *)(**(int **)(_UNK_02bae3dc + 0x2bae264) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x015fa09c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) != 1) {
    return uVar5;
  }
  iVar1 = func_0x02bae3f4(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = func_0x02bae5d4(param_1);
    if (iVar1 == 0) goto LAB_02bae348;
    if (*(int *)(**(int **)(_UNK_02bae3e8 + 0x2bae308) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x01588bac(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar2 = *(undefined4 **)(_UNK_02bae3ec + 0x2bae33c);
  }
  else {
    if (*(int *)(**(int **)(_UNK_02bae3e0 + 0x2bae2b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x01588bac(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar2 = *(undefined4 **)(_UNK_02bae3e4 + 0x2bae2ec);
  }
  *(undefined4 *)(iVar1 + 0x128) = *puVar2;
  func_0x014385cc((undefined4 *)(iVar1 + 0x128));
LAB_02bae348:
  piVar8 = *(int **)(_UNK_02bae3f0 + 0x2bae354);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01588bac(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x12d) != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x01588bac(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = 0;
    if (*(char *)(iVar1 + 300) != '\0') {
      uVar5 = 1;
    }
  }
  return uVar5;
}

