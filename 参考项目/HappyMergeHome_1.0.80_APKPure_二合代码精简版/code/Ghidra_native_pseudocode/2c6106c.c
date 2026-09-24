
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c7106c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02c714e0 + 0x2c71088);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c714e4 + 0x2c7109c));
    func_0x01438628(*(undefined4 *)(_UNK_02c714e8 + 0x2c710a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c714ec + 0x2c710b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c714f0 + 0x2c710c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c714f4 + 0x2c710cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c714f8 + 0x2c710d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c714fc + 0x2c710e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c71500 + 0x2c710f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c71504 + 0x2c710fc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x601f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x601f,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
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
    uVar7 = func_0x024f56f0(&uStack_38,0,0);
    return uVar7;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_02c71508 + 0x2c71198) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c7150c + 0x2c711b4));
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = FUN_02c4b828(iVar1,uVar7,0);
  switch(uVar7) {
  case 1:
    FUN_02c6dd30(param_1,1);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 1;
    goto code_r0x02c7128c;
  case 2:
    FUN_02c6dd30(param_1,1);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 0;
code_r0x02c7128c:
    func_0x014e94e8(iVar1,uVar4,0);
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    FUN_02c6dd30(param_1,1);
    break;
  case 4:
    FUN_02c6dd30(param_1,1);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (*(int *)(**(int **)(&UNK_02c71358 + _UNK_02c71510) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(&UNK_02c71374 + _UNK_02c71514));
    uVar4 = FUN_02c6b6f0(param_1);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02baeb18(iVar5,uVar4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,uVar2 ^ 1,0);
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(**(int **)(&UNK_02c713d0 + _UNK_02c71518) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x0202bb70(0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x0202bc14(iVar5,**(undefined4 **)(&UNK_02c7140c + _UNK_02c7151c),0);
    uVar4 = func_0x014e9568(**(undefined4 **)(&UNK_02c71428 + _UNK_02c71520),uVar4,0);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(param_2 + 0x70);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar5 + 0xc) < 2) {
      func_0x014388e8();
    }
    uStack_24 = *(undefined4 *)(iVar5 + 0x14);
    uVar3 = func_0x014387ac(**(undefined4 **)(&UNK_02c7146c + _UNK_02c71524),&uStack_24);
    uVar4 = func_0x01529a5c(uVar4,uVar3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02032130(iVar1,uVar4,1,0);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c71528 + 0x2c714cc),0);
  return uVar7;
}

