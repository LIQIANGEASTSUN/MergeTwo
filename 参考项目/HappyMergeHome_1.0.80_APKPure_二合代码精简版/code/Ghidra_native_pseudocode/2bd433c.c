
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be433c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_02be4668 + 0x2be4354);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be466c + 0x2be4368));
    func_0x01438628(*(undefined4 *)(_UNK_02be4670 + 0x2be4374));
    func_0x01438628(*(undefined4 *)(_UNK_02be4674 + 0x2be4380));
    func_0x01438628(*(undefined4 *)(_UNK_02be4678 + 0x2be438c));
    func_0x01438628(*(undefined4 *)(_UNK_02be467c + 0x2be4398));
    func_0x01438628(*(undefined4 *)(_UNK_02be4680 + 0x2be43a4));
    func_0x01438628(*(undefined4 *)(_UNK_02be4684 + 0x2be43b0));
    func_0x01438628(*(undefined4 *)(_UNK_02be4688 + 0x2be43bc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d21,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d21,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  piVar9 = *(int **)(_UNK_02be468c + 0x2be4418);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar9;
  }
  iVar6 = **(int **)(_UNK_02be4690 + 0x2be443c);
  puVar3 = *(undefined4 **)(_UNK_02be4694 + 0x2be444c);
  *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 0x10) = 1;
  uVar8 = *puVar3;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4(iVar6);
  }
  iVar1 = 0;
  uVar8 = func_0x024ef3e8(uVar8,0);
  if (*(int *)(**(int **)(_UNK_02be4698 + 0x2be4484) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024f25e0(uVar8,0);
  if (iVar6 != 0) {
    uVar8 = **(undefined4 **)(_UNK_02be469c + 0x2be44b8);
    iVar1 = func_0x014387a8(iVar6,uVar8);
    if (iVar1 == 0) {
      func_0x01438ca8(iVar6,uVar8);
      iVar1 = 0;
    }
  }
  iStack_28 = iVar1 + 0x10;
  uVar5 = 0;
  puVar10 = *(undefined4 **)(_UNK_02be46a0 + 0x2be44f8);
  puVar3 = *(undefined4 **)(_UNK_02be46a4 + 0x2be4500);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x014388e8();
    }
    iVar6 = *piVar9;
    uVar8 = *(undefined4 *)(iStack_28 + uVar5 * 4);
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar9;
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
    if (*(int *)(**(int **)(_UNK_02be46a8 + 0x2be454c) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02be46a8 + 0x2be454c));
    }
    iVar2 = func_0x014e9518(*puVar10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar4 = FUN_02bde358(iVar2,uVar8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0471bde4(iVar6,uVar8,uVar4,*puVar3);
    iVar2 = *(int *)(*(int *)(*piVar9 + 0x5c) + 8);
    iVar6 = func_0x014e9518(*puVar10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = FUN_02bde604(iVar6,uVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0471bde4(iVar2,uVar8,uVar4,*puVar3);
    iVar2 = *(int *)(*(int *)(*piVar9 + 0x5c) + 0xc);
    iVar6 = func_0x014e9518(*puVar10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = FUN_02bde4a4(iVar6,uVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0471bde4(iVar2,uVar8,uVar4,*puVar3);
    uVar5 = uVar5 + 1;
  }
  return;
}

