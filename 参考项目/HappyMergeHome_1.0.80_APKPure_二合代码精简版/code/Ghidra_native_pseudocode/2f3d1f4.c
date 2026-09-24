
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f4d1f4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02f4d4ec + 0x2f4d208);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4d4f0 + 0x2f4d21c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d4f4 + 0x2f4d228));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d4f8 + 0x2f4d234));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d4fc + 0x2f4d240));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d500 + 0x2f4d24c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d504 + 0x2f4d258));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d508 + 0x2f4d264));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d50c + 0x2f4d270));
    func_0x01438628(*(undefined4 *)(_UNK_02f4d510 + 0x2f4d27c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6ddd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6ddd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4);
    return iVar1;
  }
  iVar1 = FUN_02f44c50(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_02f44c50(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_02f45464(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar5 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_02f45464(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_02f44c50(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x04cd26d0(iVar5,iVar1 + -1,**(undefined4 **)(_UNK_02f4d514 + 0x2f4d394));
    }
  }
  if (*(int *)(**(int **)(_UNK_02f4d518 + 0x2f4d3ac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4d51c + 0x2f4d3c8));
  piVar8 = *(int **)(_UNK_02f4d520 + 0x2f4d3dc);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x8fc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_02f4d524 + 0x2f4d424) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_02f4d528 + 0x2f4d480) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = FUN_02f428bc();
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f4d52c + 0x2f4d4ac));
      func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_02f4d530 + 0x2f4d4c8),0);
      pcVar6 = (char *)(_UNK_02f70994 + 0x2f70638);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02f70998 + 0x2f7064c),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_02f7099c + 0x2f70658));
        func_0x01438628(*(undefined4 *)(_UNK_02f709a0 + 0x2f70664));
        func_0x01438628(*(undefined4 *)(_UNK_02f709a4 + 0x2f70670));
        func_0x01438628(*(undefined4 *)(_UNK_02f709a8 + 0x2f7067c));
        func_0x01438628(*(undefined4 *)(_UNK_02f709ac + 0x2f70688));
        func_0x01438628(*(undefined4 *)(_UNK_02f709b0 + 0x2f70694));
        func_0x01438628(*(undefined4 *)(_UNK_02f709b4 + 0x2f706a0));
        func_0x01438628(*(undefined4 *)(_UNK_02f709b8 + 0x2f706ac));
        func_0x01438628(*(undefined4 *)(_UNK_02f709bc + 0x2f706b8));
        func_0x01438628(*(undefined4 *)(_UNK_02f709c0 + 0x2f706c4));
        func_0x01438628(*(undefined4 *)(_UNK_02f709c4 + 0x2f706d0));
        func_0x01438628(*(undefined4 *)(_UNK_02f709c8 + 0x2f706dc));
        func_0x01438628(*(undefined4 *)(_UNK_02f709cc + 0x2f706e8));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x6de1,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f709d0 + 0x2f7074c));
        func_0x02f88e88(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar2 + 8) = iVar5;
        func_0x014385cc((int *)(iVar2 + 8),iVar5);
        piVar8 = (int *)(iVar2 + 0xc);
        *piVar8 = iVar1;
        func_0x014385cc(piVar8,iVar1);
        iVar1 = *(int *)(iVar5 + 0x44);
        *(undefined1 *)(iVar5 + 0xb0) = 1;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x046ccb14(iVar1,uVar7,**(undefined4 **)(_UNK_02f709d4 + 0x2f707b4));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_02f709d8 + 0x2f7085c),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_02f709dc + 0x2f70874);
        }
        else {
          iVar1 = *(int *)(iVar5 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x046cc810(iVar1,uVar7,**(undefined4 **)(_UNK_02f709e4 + 0x2f707e4));
          if (*(int *)(**(int **)(_UNK_02f709e8 + 0x2f707fc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_02f709f4 + 0x2f708e8) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02f709f8 + 0x2f708f8));
            func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02f709fc + 0x2f7091c),0);
            if (*(int *)(**(int **)(_UNK_02f70a00 + 0x2f70930) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar5 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_02f70a08 + 0x2f7095c),
                                    **(undefined4 **)(_UNK_02f70a04 + 0x2f70950),uVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
              *pcVar6 = '\x01';
            }
            iVar2 = func_0x02953fd4(0x4cc,0);
            if (iVar2 != 0) {
              iVar2 = func_0x029540a4(0x4cc,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar5,0);
                *pcVar6 = '\x01';
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
              if (*(int *)(iVar2 + 0x10) != 0) {
                func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
              }
              func_0x01523a6c(&uStack_38,iVar1,0);
              func_0x01523a6c(&uStack_38,iVar5,0);
              iVar5 = *(int *)(iVar2 + 8);
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              iVar1 = *(int *)(iVar2 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
              iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
              return iVar1;
            }
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(uVar7,0,0);
            if (iVar5 == 0 || iVar2 == 0) {
              return 0;
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = (*(code *)&UNK_05d3fe88)(iVar1,iVar5,0);
            return iVar1;
          }
          uStack_20 = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_02f709ec + 0x2f70834),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_02f709f0 + 0x2f7084c);
        }
        uVar7 = func_0x04f574bc(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_02f709e0 + 0x2f7088c) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x02f6c9e0(iVar5);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar5 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x6de1,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        iVar1 = func_0x0286b0b0(iVar2,iVar5,uVar7,iVar1);
      }
      return iVar1;
    }
  }
  return iVar1;
}

