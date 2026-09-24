
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c79068(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_01c79208 + 0x1c79080);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7920c + 0x1c79094));
    func_0x01438628(*(undefined4 *)(_UNK_01c79210 + 0x1c790a0));
    func_0x01438628(*(undefined4 *)(_UNK_01c79214 + 0x1c790ac));
    func_0x01438628(*(undefined4 *)(_UNK_01c79218 + 0x1c790b8));
    func_0x01438628(*(undefined4 *)(_UNK_01c7921c + 0x1c790c4));
    func_0x01438628(*(undefined4 *)(_UNK_01c79220 + 0x1c790d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad69,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad69,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02938750 + 0x293865c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02938754 + 0x2938670),param_1,param_2,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02938758 + 0x2938740));
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c79224 + 0x1c7912c));
  func_0x01c87f74(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  func_0x014385cc((undefined4 *)(iVar1 + 8),param_1);
  func_0x01c803b0(param_1);
  piVar2 = *(int **)(_UNK_01c79228 + 0x1c79174);
  *(int *)(iVar1 + 0xc) = param_2 + 1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01c7922c + 0x1c79194));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 != 0) {
    uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01c79230 + 0x1c791c0));
    func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_01c79234 + 0x1c791dc),0);
    uVar6 = (*(code *)&SUB_04cfe1c0)(iVar4,uVar6,**(undefined4 **)(_UNK_01c79238 + 0x1c791f4));
    return uVar6;
  }
  return 0;
}

