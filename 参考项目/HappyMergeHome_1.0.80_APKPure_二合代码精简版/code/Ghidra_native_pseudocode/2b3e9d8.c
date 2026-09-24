
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b4e9d8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02b4ec88 + 0x2b4e9f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4ec8c + 0x2b4ea04));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ec90 + 0x2b4ea10));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ec94 + 0x2b4ea1c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ec98 + 0x2b4ea28));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ec9c + 0x2b4ea34));
    func_0x01438628(*(undefined4 *)(_UNK_02b4eca0 + 0x2b4ea40));
    func_0x01438628(*(undefined4 *)(_UNK_02b4eca4 + 0x2b4ea4c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4eca8 + 0x2b4ea58));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ecac + 0x2b4ea64));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ecb0 + 0x2b4ea70));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2eef,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2eef,0);
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
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02b4ecb4 + 0x2b4eacc) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = 0;
  iVar2 = func_0x02c35d10(0x17,0);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_02b4ecb8 + 0x2b4eb00) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02b4ecbc + 0x2b4eb1c);
    iVar2 = func_0x014e9518(*puVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    puVar9 = *(undefined4 **)(_UNK_02b4ecc0 + 0x2b4eb40);
    iVar2 = func_0x036c7bec(iVar2,*puVar9);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x130);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02b4ecc4 + 0x2b4eb70));
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02b4ecc8 + 0x2b4eb88));
    func_0x024f108c(iVar2,uVar6,**(undefined4 **)(_UNK_02b4eccc + 0x2b4eba0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = *(uint *)(iVar2 + 0xc);
    puVar10 = *(undefined4 **)(_UNK_02b4ecd0 + 0x2b4ebc8);
    puVar7 = *(undefined4 **)(_UNK_02b4ecd4 + 0x2b4ebd0);
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) break;
      if (*(int *)(**(int **)(_UNK_02b4ecd8 + 0x2b4ebe4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(*puVar8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x036c7bec(iVar4,*puVar9);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x130);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x0152983c(iVar2,uVar1,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b73d40(iVar4,uVar6,*puVar7);
      iVar4 = FUN_02b4aaa8();
    } while (iVar4 != 0);
    uVar1 = uVar1 >> 0x1f;
  }
  return uVar1;
}

