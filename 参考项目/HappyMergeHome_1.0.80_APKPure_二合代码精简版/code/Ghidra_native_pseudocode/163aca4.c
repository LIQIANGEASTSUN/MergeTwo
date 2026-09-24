
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0164aca4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
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
  
  pcVar5 = (char *)(_UNK_0164af9c + 0x164acb8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164afa0 + 0x164accc));
    func_0x01438628(*(undefined4 *)(_UNK_0164afa4 + 0x164acd8));
    func_0x01438628(*(undefined4 *)(_UNK_0164afa8 + 0x164ace4));
    func_0x01438628(*(undefined4 *)(_UNK_0164afac + 0x164acf0));
    func_0x01438628(*(undefined4 *)(_UNK_0164afb0 + 0x164acfc));
    func_0x01438628(*(undefined4 *)(_UNK_0164afb4 + 0x164ad08));
    func_0x01438628(*(undefined4 *)(_UNK_0164afb8 + 0x164ad14));
    func_0x01438628(*(undefined4 *)(_UNK_0164afbc + 0x164ad20));
    func_0x01438628(*(undefined4 *)(_UNK_0164afc0 + 0x164ad2c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x85f5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x85f5,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4);
    return iVar1;
  }
  iVar1 = FUN_01642704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_01642704(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_01642f18(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar6 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_01642f18(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_01642704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x024f0530(iVar6,iVar1 + -1,**(undefined4 **)(_UNK_0164afc4 + 0x164ae44));
    }
  }
  if (*(int *)(**(int **)(_UNK_0164afc8 + 0x164ae5c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164afcc + 0x164ae78));
  piVar8 = *(int **)(_UNK_0164afd0 + 0x164ae8c);
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xa8c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_0164afd4 + 0x164aed4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_0164afd8 + 0x164af30) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = FUN_01640370();
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0164afdc + 0x164af5c));
      func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_0164afe0 + 0x164af78),0);
      pcVar5 = (char *)(_UNK_0166e54c + 0x166e1f0);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_0166e550 + 0x166e204),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_0166e554 + 0x166e210));
        func_0x01438628(*(undefined4 *)(_UNK_0166e558 + 0x166e21c));
        func_0x01438628(*(undefined4 *)(_UNK_0166e55c + 0x166e228));
        func_0x01438628(*(undefined4 *)(_UNK_0166e560 + 0x166e234));
        func_0x01438628(*(undefined4 *)(_UNK_0166e564 + 0x166e240));
        func_0x01438628(*(undefined4 *)(_UNK_0166e568 + 0x166e24c));
        func_0x01438628(*(undefined4 *)(_UNK_0166e56c + 0x166e258));
        func_0x01438628(*(undefined4 *)(_UNK_0166e570 + 0x166e264));
        func_0x01438628(*(undefined4 *)(_UNK_0166e574 + 0x166e270));
        func_0x01438628(*(undefined4 *)(_UNK_0166e578 + 0x166e27c));
        func_0x01438628(*(undefined4 *)(_UNK_0166e57c + 0x166e288));
        func_0x01438628(*(undefined4 *)(_UNK_0166e580 + 0x166e294));
        func_0x01438628(*(undefined4 *)(_UNK_0166e584 + 0x166e2a0));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x85f9,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0166e588 + 0x166e304));
        func_0x0166f700(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar2 + 8) = iVar6;
        func_0x014385cc((int *)(iVar2 + 8),iVar6);
        piVar8 = (int *)(iVar2 + 0xc);
        *piVar8 = iVar1;
        func_0x014385cc(piVar8,iVar1);
        iVar1 = *(int *)(iVar6 + 0x44);
        *(undefined1 *)(iVar6 + 0xb0) = 1;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f0584(iVar1,uVar7,**(undefined4 **)(_UNK_0166e58c + 0x166e36c));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_0166e590 + 0x166e414),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_0166e594 + 0x166e42c);
        }
        else {
          iVar1 = *(int *)(iVar6 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x0152a69c(iVar1,uVar7,**(undefined4 **)(_UNK_0166e59c + 0x166e39c));
          if (*(int *)(**(int **)(_UNK_0166e5a0 + 0x166e3b4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_0166e5ac + 0x166e4a0) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0166e5b0 + 0x166e4b0));
            func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_0166e5b4 + 0x166e4d4),0);
            if (*(int *)(**(int **)(_UNK_0166e5b8 + 0x166e4e8) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar6 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_0166e5c0 + 0x166e514),
                                    **(undefined4 **)(_UNK_0166e5bc + 0x166e508),uVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            pcVar5 = (char *)(_UNK_02e76828 + 0x2e7675c);
            if (*pcVar5 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar6,0);
              *pcVar5 = '\x01';
            }
            iVar2 = func_0x02953fd4(0x4cc,0);
            if (iVar2 != 0) {
              iVar2 = func_0x029540a4(0x4cc,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              pcVar5 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              if (*pcVar5 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar6,0);
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
              if (*(int *)(iVar2 + 0x10) != 0) {
                func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
              }
              func_0x01523a6c(&uStack_38,iVar1,0);
              func_0x01523a6c(&uStack_38,iVar6,0);
              iVar6 = *(int *)(iVar2 + 8);
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              iVar1 = *(int *)(iVar2 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
              iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
              return iVar1;
            }
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(uVar7,0,0);
            if (iVar6 == 0 || iVar2 == 0) {
              return 0;
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = (*(code *)&UNK_05d3fe88)(iVar1,iVar6,0);
            return iVar1;
          }
          uStack_20 = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_0166e5a4 + 0x166e3ec),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_0166e5a8 + 0x166e404);
        }
        uVar7 = func_0x01529a5c(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_0166e598 + 0x166e444) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x0166a598(iVar6);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar6 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x85f9,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        iVar1 = func_0x0286b0b0(iVar2,iVar6,uVar7,iVar1);
      }
      return iVar1;
    }
  }
  return iVar1;
}

