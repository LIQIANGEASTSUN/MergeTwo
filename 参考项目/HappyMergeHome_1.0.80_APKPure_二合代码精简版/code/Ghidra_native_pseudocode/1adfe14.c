
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01aefe14(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  
  pcVar6 = (char *)(_UNK_01aeff60 + 0x1aefe2c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeff64 + 0x1aefe40));
    func_0x01438628(*(undefined4 *)(_UNK_01aeff68 + 0x1aefe4c));
    func_0x01438628(*(undefined4 *)(_UNK_01aeff6c + 0x1aefe58));
    func_0x01438628(*(undefined4 *)(_UNK_01aeff70 + 0x1aefe64));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4e7,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar3 = func_0x024f56e0(&uStack_38,0,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_01aeff74 + 0x1aefec0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aeff78 + 0x1aefedc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  uVar3 = 0;
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    puVar8 = *(undefined4 **)(_UNK_01aeff7c + 0x1aeff1c);
    do {
      iVar2 = func_0x0152983c(iVar1,iVar5,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar3 = (uint)(*(int *)(iVar2 + 0xc) == param_2);
    } while ((*(int *)(iVar2 + 0xc) != param_2) &&
            (iVar5 = iVar5 + 1, iVar5 < *(int *)(iVar1 + 0xc)));
  }
  return uVar3;
}

