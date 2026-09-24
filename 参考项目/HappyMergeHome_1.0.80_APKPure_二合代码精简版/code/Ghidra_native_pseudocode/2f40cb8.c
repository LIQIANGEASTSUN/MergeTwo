
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f50cb8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
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
  
  pcVar5 = (char *)(_UNK_02f50e50 + 0x2f50cd0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f50e54 + 0x2f50ce4));
    func_0x01438628(*(undefined4 *)(_UNK_02f50e58 + 0x2f50cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02f50e5c + 0x2f50cfc));
    func_0x01438628(*(undefined4 *)(_UNK_02f50e60 + 0x2f50d08));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6e24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6e24,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02914910 + 0x291481c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02914914 + 0x2914830),param_1,param_2,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
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
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02914918 + 0x2914900));
    return uVar4;
  }
  piVar6 = *(int **)(_UNK_02f50e64 + 0x2f50d64);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_02f50e68 + 0x2f50d80);
  iVar1 = func_0x04e4a028(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if ((-1 < (int)param_2) && (*(int *)(iVar1 + 0x38) != 0)) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)param_2 < *(int *)(iVar1 + 0xc)) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_2) {
        func_0x05187824(0,param_2,**(undefined4 **)(_UNK_02f50e6c + 0x2f50e3c));
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x034a8a64();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_2) {
        func_0x034a8c14();
      }
      return *(undefined4 *)(iVar1 + param_2 * 4 + 0x10);
    }
  }
  return 0;
}

