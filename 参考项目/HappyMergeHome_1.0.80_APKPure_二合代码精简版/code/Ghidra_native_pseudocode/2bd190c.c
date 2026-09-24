
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02be190c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02be1ac0 + 0x2be1924);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be1ac4 + 0x2be1938));
    func_0x01438628(*(undefined4 *)(_UNK_02be1ac8 + 0x2be1944));
    func_0x01438628(*(undefined4 *)(_UNK_02be1acc + 0x2be1950));
    func_0x01438628(*(undefined4 *)(_UNK_02be1ad0 + 0x2be195c));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x02953fd4(0x5d08,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5d08,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  iVar2 = 0;
  piVar9 = *(int **)(_UNK_02be1ad4 + 0x2be19c0);
  puVar10 = *(undefined4 **)(_UNK_02be1ad8 + 0x2be19c8);
  puVar11 = *(undefined4 **)(_UNK_02be1adc + 0x2be19d0);
  while( true ) {
    iVar3 = FUN_02baef1c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar7) break;
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(*puVar10);
    iVar4 = FUN_02baef1c(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x03b7661c(iVar4,iVar7,*puVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c4cf74(iVar3,uVar8,0);
    iVar2 = iVar2 + iVar3;
    iVar7 = iVar7 + 1;
  }
  iVar7 = FUN_02baef1c(param_1);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  return (uint)(*(int *)(iVar7 + 0xc) != iVar2);
}

