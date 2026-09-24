
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bff51c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar5 = (char *)(_UNK_02bff73c + 0x2bff538);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bff740 + 0x2bff54c));
    func_0x01438628(*(undefined4 *)(_UNK_02bff744 + 0x2bff558));
    func_0x01438628(*(undefined4 *)(_UNK_02bff748 + 0x2bff564));
    func_0x01438628(*(undefined4 *)(_UNK_02bff74c + 0x2bff570));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x21ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x21ab,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028698dc + 0x28697e8);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028698e0 + 0x28697fc),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2);
    uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028698e4 + 0x28698cc));
    return uVar4;
  }
  piVar6 = *(int **)(_UNK_02bff750 + 0x2bff5d0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar4 = func_0x024efa64(0);
  piVar7 = *(int **)(_UNK_02bff754 + 0x2bff5fc);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  uVar4 = 0;
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024efa64(0);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = 0;
    func_0x024efa74(iVar1,param_2,uVar4,0);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    puVar8 = *(undefined4 **)(_UNK_02bff758 + 0x2bff68c);
    while( true ) {
      iVar1 = *(int *)(param_1 + 0xcc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar3) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0xcc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024efa84(auStack_68,iVar1,iVar3,*puVar8);
      uVar2 = auStack_68[0];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar4,uVar2,0);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024efa84(auStack_68,iVar1,iVar3,*puVar8);
    uVar4 = auStack_68[0];
  }
  return uVar4;
}

