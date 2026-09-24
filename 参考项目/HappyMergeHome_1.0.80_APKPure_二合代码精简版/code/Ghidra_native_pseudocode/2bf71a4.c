
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c071a4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uStack_20;
  uint uStack_1c;
  
  pcVar3 = (char *)(_UNK_02c07458 + 0x2c071c4);
  uStack_20 = param_3;
  uStack_1c = param_2;
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0745c + 0x2c071e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c07460 + 0x2c071ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c07464 + 0x2c071f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c07468 + 0x2c07204));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5e8b,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02c0746c + 0x2c07268) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c07470 + 0x2c07284));
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_02bdd5c4(iVar2,param_2,param_3,uVar5,0);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(**(int **)(_UNK_02c07474 + 0x2c072c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x035e7b3c(uVar5,&uStack_1c,&uStack_20,**(undefined4 **)(_UNK_02c07478 + 0x2c072ec));
    func_0x02c0b784(param_1,uStack_1c,uStack_20);
    uVar1 = uStack_20;
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar2 = *(int *)(iVar2 + uVar1 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02c3f4b4(iVar2,0);
    uVar1 = uStack_20;
    if (iVar2 != -1) {
      iVar2 = *(int *)(param_1 + 0x44);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar1) {
        func_0x014388e8();
      }
      iVar2 = *(int *)(iVar2 + uVar1 * 4 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024eecb8(iVar2,0);
      uVar1 = uStack_1c;
      iVar4 = *(int *)(param_1 + 0x44);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar1) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar4 + uVar1 * 4 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x024eecb8(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x024f5ff0(iVar4,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024f00a0(iVar2,iVar4 + -1,0);
      FUN_02c04cf8(param_1,uStack_20);
    }
    FUN_02c04cf8(param_1,uStack_1c);
  }
  else {
    iVar2 = func_0x029540a4(0x5e8b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar2,param_1,param_2,param_3,0);
  }
  return;
}

