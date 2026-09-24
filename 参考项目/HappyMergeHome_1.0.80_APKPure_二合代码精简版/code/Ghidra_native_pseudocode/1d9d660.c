
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dad660(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar5 = (char *)(_UNK_01dadff0 + 0x1dad67c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01dadff4 + 0x1dad690));
    func_0x01438628(*(undefined4 *)(_UNK_01dadff8 + 0x1dad69c));
    func_0x01438628(*(undefined4 *)(_UNK_01dadffc + 0x1dad6a8));
    func_0x01438628(*(undefined4 *)(_UNK_01dae000 + 0x1dad6b4));
    func_0x01438628(*(undefined4 *)(_UNK_01dae004 + 0x1dad6c0));
    func_0x01438628(*(undefined4 *)(_UNK_01dae008 + 0x1dad6cc));
    func_0x01438628(*(undefined4 *)(_UNK_01dae00c + 0x1dad6d8));
    func_0x01438628(*(undefined4 *)(_UNK_01dae010 + 0x1dad6e4));
    func_0x01438628(*(undefined4 *)(_UNK_01dae014 + 0x1dad6f0));
    func_0x01438628(*(undefined4 *)(_UNK_01dae018 + 0x1dad6fc));
    func_0x01438628(*(undefined4 *)(_UNK_01dae01c + 0x1dad708));
    func_0x01438628(*(undefined4 *)(_UNK_01dae020 + 0x1dad714));
    func_0x01438628(*(undefined4 *)(_UNK_01dae024 + 0x1dad720));
    func_0x01438628(*(undefined4 *)(_UNK_01dae028 + 0x1dad72c));
    func_0x01438628(*(undefined4 *)(_UNK_01dae02c + 0x1dad738));
    func_0x01438628(*(undefined4 *)(_UNK_01dae030 + 0x1dad744));
    func_0x01438628(*(undefined4 *)(_UNK_01dae034 + 0x1dad750));
    func_0x01438628(*(undefined4 *)(_UNK_01dae038 + 0x1dad75c));
    func_0x01438628(*(undefined4 *)(_UNK_01dae03c + 0x1dad768));
    func_0x01438628(*(undefined4 *)(_UNK_01dae040 + 0x1dad774));
    func_0x01438628(*(undefined4 *)(_UNK_01dae044 + 0x1dad780));
    func_0x01438628(*(undefined4 *)(_UNK_01dae048 + 0x1dad78c));
    func_0x01438628(*(undefined4 *)(_UNK_01dae04c + 0x1dad798));
    func_0x01438628(*(undefined4 *)(_UNK_01dae050 + 0x1dad7a4));
    func_0x01438628(*(undefined4 *)(_UNK_01dae054 + 0x1dad7b0));
    func_0x01438628(*(undefined4 *)(_UNK_01dae058 + 0x1dad7bc));
    func_0x01438628(*(undefined4 *)(_UNK_01dae05c + 0x1dad7c8));
    func_0x01438628(*(undefined4 *)(_UNK_01dae060 + 0x1dad7d4));
    func_0x01438628(*(undefined4 *)(_UNK_01dae064 + 0x1dad7e0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x28cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x28cc,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01dae068 + 0x1dad840));
  func_0x01ed6dc4(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 8) = (int)param_1;
  func_0x014385cc((int *)(iVar1 + 8),param_1);
  if (*(int *)(**(int **)(_UNK_01dae06c + 0x1dad878) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x0202346c(0);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  func_0x020257a4(iVar7,0x209,0,0,0,0,0);
  piVar2 = *(int **)(_UNK_01dae070 + 0x1dad8e4);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01dae074 + 0x1dad904));
  uVar9 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined4 *)(*param_1 + 0x1ac));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar2 = (int *)func_0x0374c388(iVar7,uVar9,**(undefined4 **)(_UNK_01dae078 + 0x1dad940));
  if (*(int *)(**(int **)(_UNK_01dae07c + 0x1dad958) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = 0;
  iVar7 = func_0x024efb9c(piVar2,0);
  if (iVar7 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x014388e4();
    }
    (**(code **)(*piVar2 + 0x128))(piVar2,0,1,*(undefined4 *)(*piVar2 + 300));
    *(undefined1 *)(iVar1 + 0xc) = 1;
  }
  puVar10 = *(undefined4 **)(_UNK_01dae080 + 0x1dad9c0);
  iVar7 = 0;
  while( true ) {
    iVar3 = FUN_01da6be8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar6) break;
    iVar3 = FUN_01da6be8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar3,iVar6,*puVar10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar3 + 0xc);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar6 = iVar6 + 1;
    if (iVar8 == *(int *)(param_2 + 8)) {
      iVar7 = iVar3;
    }
  }
  iVar6 = FUN_01da3ff8(param_1);
  if (iVar6 != 0) {
    iVar6 = FUN_01da70cc(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x30);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(param_2 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x024f0540(iVar6,uVar9,**(undefined4 **)(_UNK_01dae084 + 0x1dada94));
    if (iVar6 == 0) {
      iVar6 = FUN_01da70cc(param_1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x30);
      uVar9 = *(undefined4 *)(param_2 + 8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b70cd0(iVar6,uVar9,0,**(undefined4 **)(_UNK_01dae088 + 0x1dadae4));
    }
    iVar6 = FUN_01da70cc(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x30);
    uVar9 = *(undefined4 *)(param_2 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
      iVar3 = func_0x03b70fac(0,uVar9,**(undefined4 **)(_UNK_01dae090 + 0x1dadb48));
      func_0x014388e4();
    }
    else {
      iVar3 = func_0x03b70fac(iVar6,uVar9,**(undefined4 **)(_UNK_01dae08c + 0x1dadb24));
    }
    func_0x03b70fe4(iVar6,uVar9,iVar3 + 1,**(undefined4 **)(_UNK_01dae094 + 0x1dadb6c));
  }
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar9 = *(undefined4 *)(iVar7 + 0x18);
  uVar4 = *(undefined4 *)(iVar7 + 0x1c);
  iStack_2c = iVar1;
  if (*(int *)(**(int **)(_UNK_01dae098 + 0x1dadb90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_28 = func_0x02af43a8(uVar9,uVar4,0);
  iVar1 = 0;
  do {
    iVar7 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar7 + 0xc) <= iVar1) {
      if (*(int *)(**(int **)(_UNK_01dae0b8 + 0x1dade20) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01dae0bc + 0x1dade3c));
      iVar1 = iStack_2c;
      piVar2 = *(int **)(_UNK_01dae0c0 + 0x1dade50);
      iVar3 = *piVar2;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar2;
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1ac);
      piVar2 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01dae0c4 + 0x1dade78),1);
      if (piVar2 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar3 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar2 + 0x20));
      if (iVar3 == 0) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar2[3] == 0) {
        func_0x014388e8();
      }
      piVar2[4] = iVar7;
      func_0x014385cc(piVar2 + 4,iVar7);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar6,uVar9,piVar2,0);
      if (*(int *)(**(int **)(_UNK_01dae0c8 + 0x1dadf04) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x03b2c734(**(undefined4 **)(_UNK_01dae0cc + 0x1dadf20));
      if (*(int *)(**(int **)(_UNK_01dae0d0 + 0x1dadf34) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01dae0d4 + 0x1dadf50));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01dae0d8 + 0x1dadf70));
      func_0x0152e3ec(uVar9,iVar1,**(undefined4 **)(_UNK_01dae0dc + 0x1dadf94),0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = uVar9;
      func_0x02b75870(iVar6,iVar7,uVar4,0,0x62,0,0,0);
      return;
    }
    iVar7 = func_0x0152983c(iVar7,iVar1,**(undefined4 **)(_UNK_01dae09c + 0x1dadbf4));
    iVar6 = **(int **)(**(int **)(_UNK_01dae0a0 + 0x1dadc10) + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar7 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x02e651cc(iVar6,uVar9,0);
    if (iVar6 == 0) {
      if (*(int *)(**(int **)(_UNK_01dae0a4 + 0x1dadc54) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01dae0a8 + 0x1dadc7c));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x42;
      uVar9 = *(undefined4 *)(iVar7 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar9;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar6,iVar3,1,0);
      iVar6 = FUN_01dad520(param_1,*(undefined4 *)(iVar7 + 8));
      if (iVar6 == 0) goto LAB_01dadd9c;
      if (0 < *(int *)(iVar7 + 0xc)) {
        iVar6 = 0;
        do {
          iVar3 = FUN_01da70cc(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar9 = *(undefined4 *)(iVar7 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar9,**(undefined4 **)(_UNK_01dae0ac + 0x1dadd30));
          iVar3 = **(int **)(_UNK_01dae0b0 + 0x1dadd44);
          param_1[0x13] = param_1[0x13] + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01da6358();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01ede050(iVar3,0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar7 + 0xc));
      }
    }
    else {
LAB_01dadd9c:
      uVar9 = *(undefined4 *)(iVar7 + 8);
      uVar4 = *(undefined4 *)(iVar7 + 0xc);
      iVar7 = **(int **)(**(int **)(_UNK_01dae0b4 + 0x1dadda8) + 0x5c);
      if (iVar7 == 0) {
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
      func_0x02e64460(iVar7,uVar9,uVar4);
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

