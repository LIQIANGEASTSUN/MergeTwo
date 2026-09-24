
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2c76c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02f2d0fc + 0x2f2c788);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2d100 + 0x2f2c79c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d104 + 0x2f2c7a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d108 + 0x2f2c7b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d10c + 0x2f2c7c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d110 + 0x2f2c7cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d114 + 0x2f2c7d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d118 + 0x2f2c7e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d11c + 0x2f2c7f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d120 + 0x2f2c7fc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d124 + 0x2f2c808));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d128 + 0x2f2c814));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d12c + 0x2f2c820));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d130 + 0x2f2c82c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d134 + 0x2f2c838));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d138 + 0x2f2c844));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d13c + 0x2f2c850));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d140 + 0x2f2c85c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d144 + 0x2f2c868));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d148 + 0x2f2c874));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d14c + 0x2f2c880));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d150 + 0x2f2c88c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d154 + 0x2f2c898));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d158 + 0x2f2c8a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d15c + 0x2f2c8b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d160 + 0x2f2c8bc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d164 + 0x2f2c8c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d168 + 0x2f2c8d4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d16c + 0x2f2c8e0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2d170 + 0x2f2c8ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x28dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x28dd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f2d174 + 0x2f2c94c));
  func_0x02f2d884(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 8) = (int)param_1;
  func_0x014385cc((int *)(iVar1 + 8),param_1);
  if (*(int *)(**(int **)(_UNK_02f2d178 + 0x2f2c984) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x0202346c(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  func_0x020257a4(iVar6,0x223,0,0,0,0,0);
  piVar2 = *(int **)(_UNK_02f2d17c + 0x2f2c9f0);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2d180 + 0x2f2ca10));
  uVar8 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined4 *)(*param_1 + 0x1ac));
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  piVar2 = (int *)func_0x0374c388(iVar6,uVar8,**(undefined4 **)(_UNK_02f2d184 + 0x2f2ca4c));
  if (*(int *)(**(int **)(_UNK_02f2d188 + 0x2f2ca64) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = 0;
  iVar6 = func_0x024efb9c(piVar2,0);
  if (iVar6 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x014388e4();
    }
    (**(code **)(*piVar2 + 0x128))(piVar2,0,1,*(undefined4 *)(*piVar2 + 300));
    *(undefined1 *)(iVar1 + 0xc) = 1;
  }
  puVar10 = *(undefined4 **)(_UNK_02f2d18c + 0x2f2cacc);
  iVar6 = 0;
  while( true ) {
    iVar3 = FUN_02f23834(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar7) break;
    iVar3 = FUN_02f23834(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04cfd760(iVar3,iVar7,*puVar10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar3 + 0xc);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar7 = iVar7 + 1;
    if (iVar9 == *(int *)(param_2 + 8)) {
      iVar6 = iVar3;
    }
  }
  iVar7 = FUN_02f1f4a4(param_1);
  if (iVar7 != 0) {
    iVar7 = FUN_02f23d18(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(param_2 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x046c26fc(iVar7,uVar8,**(undefined4 **)(_UNK_02f2d190 + 0x2f2cba0));
    if (iVar7 == 0) {
      iVar7 = FUN_02f23d18(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x30);
      uVar8 = *(undefined4 *)(param_2 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x03b70cd0(iVar7,uVar8,0,**(undefined4 **)(_UNK_02f2d194 + 0x2f2cbf0));
    }
    iVar7 = FUN_02f23d18(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    uVar8 = *(undefined4 *)(param_2 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
      iVar3 = func_0x03b70fac(0,uVar8,**(undefined4 **)(_UNK_02f2d19c + 0x2f2cc54));
      func_0x014388e4();
    }
    else {
      iVar3 = func_0x03b70fac(iVar7,uVar8,**(undefined4 **)(_UNK_02f2d198 + 0x2f2cc30));
    }
    func_0x03b70fe4(iVar7,uVar8,iVar3 + 1,**(undefined4 **)(_UNK_02f2d1a0 + 0x2f2cc78));
  }
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar6 + 0x18);
  uVar4 = *(undefined4 *)(iVar6 + 0x1c);
  iStack_2c = iVar1;
  if (*(int *)(**(int **)(_UNK_02f2d1a4 + 0x2f2cc9c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_28 = func_0x02af43a8(uVar8,uVar4,0);
  iVar1 = 0;
  do {
    iVar6 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar1) {
      if (*(int *)(**(int **)(_UNK_02f2d1c4 + 0x2f2cf2c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2d1c8 + 0x2f2cf48));
      iVar1 = iStack_2c;
      piVar2 = *(int **)(_UNK_02f2d1cc + 0x2f2cf5c);
      iVar3 = *piVar2;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar2;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1ac);
      piVar2 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f2d1d0 + 0x2f2cf84),1);
      if (piVar2 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar3 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar2 + 0x20));
      if (iVar3 == 0) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar2[3] == 0) {
        func_0x014388e8();
      }
      piVar2[4] = iVar6;
      func_0x014385cc(piVar2 + 4,iVar6);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar7,uVar8,piVar2,0);
      if (*(int *)(**(int **)(_UNK_02f2d1d4 + 0x2f2d010) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x03b2c734(**(undefined4 **)(_UNK_02f2d1d8 + 0x2f2d02c));
      if (*(int *)(**(int **)(_UNK_02f2d1dc + 0x2f2d040) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2d1e0 + 0x2f2d05c));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02f2d1e4 + 0x2f2d07c));
      func_0x0152e3ec(uVar8,iVar1,**(undefined4 **)(_UNK_02f2d1e8 + 0x2f2d0a0),0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = uVar8;
      func_0x02b75870(iVar7,iVar6,uVar4,0,0x62,0,0,0);
      return;
    }
    iVar6 = func_0x04cfd760(iVar6,iVar1,**(undefined4 **)(_UNK_02f2d1a8 + 0x2f2cd00));
    iVar7 = **(int **)(**(int **)(_UNK_02f2d1ac + 0x2f2cd1c) + 0x5c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar6 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = FUN_02e651cc(iVar7,uVar8,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_02f2d1b0 + 0x2f2cd60) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f2d1b4 + 0x2f2cd88));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x46;
      uVar8 = *(undefined4 *)(iVar6 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar8;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_02f2c62c(param_1,*(undefined4 *)(iVar6 + 8));
      if (iVar7 == 0) goto LAB_02f2cea8;
      if (0 < *(int *)(iVar6 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = FUN_02f23d18(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar8 = *(undefined4 *)(iVar6 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar8,**(undefined4 **)(_UNK_02f2d1b8 + 0x2f2ce3c));
          iVar3 = **(int **)(_UNK_02f2d1bc + 0x2f2ce50);
          param_1[0x13] = param_1[0x13] + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f22a90();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02f38f48(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar6 + 0xc));
      }
    }
    else {
LAB_02f2cea8:
      uVar8 = *(undefined4 *)(iVar6 + 8);
      uVar4 = *(undefined4 *)(iVar6 + 0xc);
      iVar6 = **(int **)(**(int **)(_UNK_02f2d1c0 + 0x2f2ceb4) + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_40 = 1;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      FUN_02e64460(iVar6,uVar8,uVar4);
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

