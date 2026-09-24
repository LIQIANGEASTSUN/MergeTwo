
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c709a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02c71000 + 0x2c709c0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c71004 + 0x2c709d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c71008 + 0x2c709e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c7100c + 0x2c709ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c71010 + 0x2c709f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c71014 + 0x2c70a04));
    func_0x01438628(*(undefined4 *)(_UNK_02c71018 + 0x2c70a10));
    func_0x01438628(*(undefined4 *)(_UNK_02c7101c + 0x2c70a1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c71020 + 0x2c70a28));
    func_0x01438628(*(undefined4 *)(_UNK_02c71024 + 0x2c70a34));
    func_0x01438628(*(undefined4 *)(_UNK_02c71028 + 0x2c70a40));
    func_0x01438628(*(undefined4 *)(_UNK_02c7102c + 0x2c70a4c));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x601c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x601c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
    return;
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
  piVar7 = *(int **)(_UNK_02c71030 + 0x2c70af4);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar6 = *(undefined4 **)(_UNK_02c71034 + 0x2c70b10);
  iVar1 = func_0x014e9518(*puVar6);
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = FUN_02c6b6f0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02baed80(iVar1,uVar5,uVar2,0);
  if (iVar1 < 1) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar6);
    uVar5 = *(undefined4 *)(param_1 + 0x78);
    uVar2 = FUN_02c6b6f0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd8784(iVar1,uVar5,uVar2,0);
    uStack_28 = 0;
    iVar3 = func_0x014e9518(*puVar6);
    uVar5 = *(undefined4 *)(param_1 + 0x78);
    uVar2 = FUN_02c6b6f0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_02bd694c(iVar3,uVar5,&uStack_28,uVar2,0);
    if (iVar1 < 1) {
      if (0 < iVar3) {
        if (param_3 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(param_3 + 0x38);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) < 1) {
          iVar1 = *(int *)(param_3 + 0x38);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar1 + 0xc)) {
            return;
          }
          iVar1 = *(int *)(param_1 + 0x50);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x014e94d8(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x014e94e8(iVar1,1,0);
          FUN_02c6dd30(param_1,0);
          func_0x02c716d4(param_1,2,iVar3);
          if (*(int *)(**(int **)(_UNK_02c71040 + 0x2c70f48) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02c71044 + 0x2c70f64));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029b3f20(iVar1,**(undefined4 **)(_UNK_02c71048 + 0x2c70f8c),0);
          FUN_02c6ffa4(param_1,iVar3 <= iVar1 * 0x3c);
          iVar1 = *(int *)(param_1 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c7104c + 0x2c70fcc),0);
          func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02c71050 + 0x2c70fe8),0,0x3f800000,0);
          goto LAB_02c70dd0;
        }
      }
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,0,0);
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c71068 + 0x2c70e70),0);
      FUN_02c6dd30(param_1,1);
      iVar1 = *(int *)(param_1 + 0x20);
      if (param_2 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01524ffc(param_2 + 0x50,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02032130(iVar1,uVar2,1,0);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x014e94d8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar3,1,0);
    FUN_02c6dd30(param_1,0);
    func_0x02c716d4(param_1,1,iVar1);
    if (*(int *)(**(int **)(_UNK_02c71054 + 0x2c70d1c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02c71058 + 0x2c70d38));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029b3f20(iVar3,**(undefined4 **)(_UNK_02c7105c + 0x2c70d60),0);
    FUN_02c6ffa4(param_1,iVar1 <= iVar3 * 0x3c);
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x0202e208(iVar3,**(undefined4 **)(_UNK_02c71060 + 0x2c70da0),0);
    func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02c71064 + 0x2c70dbc),0,0x3f800000,0);
    iVar3 = iVar1;
  }
  else {
    FUN_02c6ffa4(param_1,0);
    func_0x02c716d4(param_1,0,iVar1);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,1,0);
    FUN_02c6dd30(param_1,0);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c71038 + 0x2c70bdc),0);
    func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02c7103c + 0x2c70bf8),0,0x3f800000,0);
    iVar3 = 0;
  }
LAB_02c70dd0:
  func_0x02c72154(param_1,iVar3);
  return;
}

