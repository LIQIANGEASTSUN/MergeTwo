
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5b268(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b5b3f0 + 0x1b5b27c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5b3f4 + 0x1b5b290));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b3f8 + 0x1b5b29c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b3fc + 0x1b5b2a8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b400 + 0x1b5b2b4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xc9f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xc9f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_0289189c + 0x28917bc);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028918a0 + 0x28917d0),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar2,0,0);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028918a4 + 0x289188c));
    return uVar7;
  }
  piVar4 = *(int **)(_UNK_01b5b404 + 0x1b5b30c);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar6 = *(undefined4 **)(_UNK_01b5b408 + 0x1b5b328);
  iVar1 = func_0x014e9518(*puVar6);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x18) != 0) {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = (*(code *)&SUB_04cfd760)(iVar1,0,**(undefined4 **)(_UNK_01b5b40c + 0x1b5b3dc));
      return uVar7;
    }
  }
  return 0;
}

