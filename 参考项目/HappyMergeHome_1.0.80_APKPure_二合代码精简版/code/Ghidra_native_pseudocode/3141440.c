
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03151440(undefined4 param_1,uint param_2)

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
  
  pcVar5 = (char *)(_UNK_031515d8 + 0x3151458);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031515dc + 0x315146c));
    func_0x01438628(*(undefined4 *)(_UNK_031515e0 + 0x3151478));
    func_0x01438628(*(undefined4 *)(_UNK_031515e4 + 0x3151484));
    func_0x01438628(*(undefined4 *)(_UNK_031515e8 + 0x3151490));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a37,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7a37,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0291b5e0 + 0x291b4ec);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0291b5e4 + 0x291b500),param_1,param_2,0);
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
    uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0291b5e8 + 0x291b5d0));
    return uVar4;
  }
  piVar6 = *(int **)(_UNK_031515ec + 0x31514ec);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_031515f0 + 0x3151508);
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
        func_0x05187824(0,param_2,**(undefined4 **)(_UNK_031515f4 + 0x31515c4));
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

