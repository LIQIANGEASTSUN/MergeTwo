
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c04f00(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
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
  
  pcVar4 = (char *)(_UNK_02c05ee0 + 0x2c04f1c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c05ee4 + 0x2c04f30));
    func_0x01438628(*(undefined4 *)(_UNK_02c05ee8 + 0x2c04f3c));
    func_0x01438628(*(undefined4 *)(_UNK_02c05eec + 0x2c04f48));
    func_0x01438628(*(undefined4 *)(_UNK_02c05ef0 + 0x2c04f54));
    func_0x01438628(*(undefined4 *)(_UNK_02c05ef4 + 0x2c04f60));
    func_0x01438628(*(undefined4 *)(_UNK_02c05ef8 + 0x2c04f6c));
    func_0x01438628(*(undefined4 *)(_UNK_02c05efc + 0x2c04f78));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f00 + 0x2c04f84));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f04 + 0x2c04f90));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f08 + 0x2c04f9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f0c + 0x2c04fa8));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f10 + 0x2c04fb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f14 + 0x2c04fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f18 + 0x2c04fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f1c + 0x2c04fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f20 + 0x2c04fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f24 + 0x2c04ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f28 + 0x2c04ffc));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f2c + 0x2c05008));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f30 + 0x2c05014));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f34 + 0x2c05020));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f38 + 0x2c0502c));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f3c + 0x2c05038));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f40 + 0x2c05044));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f44 + 0x2c05050));
    func_0x01438628(*(undefined4 *)(_UNK_02c05f48 + 0x2c0505c));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d5f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5d5f,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c0608c + 0x2c050bc));
  func_0x02c3f9d4(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar2 + 8) = param_1;
  func_0x014385cc((int *)(iVar2 + 8),param_1);
  puVar11 = (uint *)(iVar2 + 0xc);
  *puVar11 = param_2;
  if (*(uint *)(param_1 + 0xb0) != param_2) {
    return 0;
  }
  piVar10 = (int *)(param_1 + 0x44);
  iVar6 = *piVar10;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + param_2 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  if (*(int *)(**(int **)(_UNK_02c06090 + 0x2c05144) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(uVar7,0,0);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = *piVar10;
  uVar1 = *puVar11;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar1) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x1c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar6 + 0x1c) != 200) {
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x1c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0x1c) != 0xc9) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  FUN_02beb100(param_1);
  if (*(int *)(**(int **)(_UNK_02c06094 + 0x2c05274) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c06098 + 0x2c05290));
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *puVar11;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = FUN_02bdd790(iVar6,uVar1,uVar7,0,0);
  if (iVar6 == -1) {
    if (*(int *)(**(int **)(_UNK_02c0609c + 0x2c0574c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202bb70(0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = func_0x0202bc14(iVar2,**(undefined4 **)(_UNK_02c060a0 + 0x2c05784),0);
    if (*(int *)(**(int **)(_UNK_02c060a4 + 0x2c0579c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c060a8 + 0x2c057b8));
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x024eecb8(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_30,iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02c3a04c(iVar2,uStack_30,uStack_2c,uStack_28,uStack_34,0x3f800000,0);
    FUN_02beb1d0(param_1);
    *(undefined1 *)(param_1 + 0xa8) = 0;
    return 0;
  }
  piVar8 = *(int **)(_UNK_02c060ac + 0x2c052dc);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x017d0b50(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x017d5bc8(iVar6,0,0);
  if ((iVar6 != 0) && (*(int *)(param_1 + 0x10) == 0x12)) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x017d0b50(0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x017d0f30(iVar6,0);
    if (0 < iVar6) {
      iVar6 = **(int **)(**(int **)(_UNK_02c060c0 + 0x2c05374) + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      func_0x02e62afc(iVar6,0x389,1);
      iVar6 = *piVar10;
      uVar1 = *puVar11;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar6 + 0xc) <= uVar1) {
        func_0x014388e8();
      }
      iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar9 = *piVar10;
      uVar1 = *puVar11;
      iVar6 = *(int *)(iVar6 + 0x1c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar1) {
        func_0x014388e8();
      }
      iVar9 = *(int *)(iVar9 + uVar1 * 4 + 0x10);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar6 == 200) {
        puVar5 = *(undefined4 **)(_UNK_02c060c4 + 0x2c05474);
        uVar7 = func_0x014388d4(*puVar5);
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02c060c8 + 0x2c05490),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02c2d68c(iVar9,uVar7,0);
        iVar6 = *piVar10;
        uVar1 = *puVar11;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar7 = func_0x014388d4(*puVar5);
        puVar5 = *(undefined4 **)(_UNK_02c060cc + 0x2c05508);
      }
      else {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar9 + 0x1c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar6 + 0x1c) != 0xc9) goto LAB_02c059b0;
        iVar6 = *piVar10;
        uVar1 = *puVar11;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        puVar5 = *(undefined4 **)(_UNK_02c060d0 + 0x2c058ec);
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar7 = func_0x014388d4(*puVar5);
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02c060d4 + 0x2c0590c),0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c2d68c(iVar6,uVar7,0);
        iVar6 = *piVar10;
        uVar1 = *puVar11;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar7 = func_0x014388d4(*puVar5);
        puVar5 = *(undefined4 **)(_UNK_02c060d8 + 0x2c05984);
      }
      func_0x0152e3ec(uVar7,iVar2,*puVar5,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x02c32c3c(iVar6,uVar7,0);
LAB_02c059b0:
      FUN_02beb1d0(param_1);
      return 1;
    }
    goto LAB_02c05d34;
  }
  piVar8 = *(int **)(_UNK_02c060dc + 0x2c05514);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x032a3fc4(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x032a8ec4(iVar6,0,0);
  if ((iVar6 != 0) && (*(int *)(param_1 + 0x10) == 0x15)) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x032a3fc4(0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x032a43a4(iVar6,0);
    if (iVar6 < 1) goto LAB_02c05d34;
    iVar6 = **(int **)(**(int **)(_UNK_02c060e0 + 0x2c055ac) + 0x5c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x02e62afc(iVar6,0x5a,1);
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x1c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar9 = *piVar10;
    uVar1 = *puVar11;
    iVar6 = *(int *)(iVar6 + 0x1c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar9 = *(int *)(iVar9 + uVar1 * 4 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (iVar6 == 200) {
      puVar5 = *(undefined4 **)(_UNK_02c060e4 + 0x2c056ac);
      uVar7 = func_0x014388d4(*puVar5);
      func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02c060e8 + 0x2c056c8),0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x02c2d68c(iVar9,uVar7,0);
      iVar6 = *piVar10;
      uVar1 = *puVar11;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar6 + 0xc) <= uVar1) {
        func_0x014388e8();
      }
      iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      uVar7 = func_0x014388d4(*puVar5);
      puVar5 = *(undefined4 **)(_UNK_02c060ec + 0x2c05740);
LAB_02c05ac0:
      func_0x0152e3ec(uVar7,iVar2,*puVar5,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x02c333e4(iVar6,uVar7,0);
    }
    else {
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar9 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0x1c) == 0xc9) {
        iVar6 = *piVar10;
        uVar1 = *puVar11;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        puVar5 = *(undefined4 **)(_UNK_02c060f0 + 0x2c05a2c);
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar7 = func_0x014388d4(*puVar5);
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02c060f4 + 0x2c05a4c),0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x02c2d68c(iVar6,uVar7,0);
        iVar6 = *piVar10;
        uVar1 = *puVar11;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar7 = func_0x014388d4(*puVar5);
        puVar5 = *(undefined4 **)(_UNK_02c060f8 + 0x2c05ac4);
        goto LAB_02c05ac0;
      }
    }
    FUN_02beb1d0(param_1);
  }
  piVar8 = *(int **)(_UNK_02c060fc + 0x2c05b04);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x018f5b04(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x018faa04(iVar6,0,0);
  if (iVar6 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0x18) {
    return 0;
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x018f5b04(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x018f5ee4(iVar6,0);
  if (iVar6 < 1) {
LAB_02c05d34:
    if (*(int *)(**(int **)(_UNK_02c060b0 + 0x2c05d40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202bb70(0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = func_0x0202bc14(iVar2,**(undefined4 **)(_UNK_02c060b4 + 0x2c05d78),0);
    if (*(int *)(**(int **)(_UNK_02c060b8 + 0x2c05d90) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c060bc + 0x2c05dac));
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x024eecb8(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_30,iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02c3a04c(iVar2,uStack_30,uStack_2c,uStack_28,uStack_34,0x3f800000,0);
    FUN_02beb1d0(param_1);
    uVar1 = *puVar11;
    iVar2 = *(int *)(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0xa8) = 0;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar2 = *(int *)(iVar2 + uVar1 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    return (uint)(*(int *)(iVar2 + 0x1c) == 0xc9);
  }
  iVar6 = **(int **)(**(int **)(_UNK_02c06100 + 0x2c05ba0) + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  func_0x02e62afc(iVar6,0x5e,1);
  iVar6 = *piVar10;
  uVar1 = *puVar11;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar1) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x1c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar9 = *piVar10;
  uVar1 = *puVar11;
  iVar6 = *(int *)(iVar6 + 0x1c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar1) {
    func_0x014388e8();
  }
  iVar9 = *(int *)(iVar9 + uVar1 * 4 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0xc);
  if (iVar6 == 200) {
    puVar5 = *(undefined4 **)(_UNK_02c06104 + 0x2c05ca0);
    uVar7 = func_0x014388d4(*puVar5);
    func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02c06108 + 0x2c05cbc),0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x02c2d68c(iVar9,uVar7,0);
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    uVar7 = func_0x014388d4(*puVar5);
    puVar5 = *(undefined4 **)(_UNK_02c0610c + 0x2c05d34);
  }
  else {
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar9 + 0x1c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0x1c) != 0xc9) goto LAB_02c0607c;
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    puVar5 = *(undefined4 **)(_UNK_02c06110 + 0x2c05fb8);
    iVar6 = *(int *)(iVar6 + 0xc);
    uVar7 = func_0x014388d4(*puVar5);
    func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02c06114 + 0x2c05fd8),0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x02c2d68c(iVar6,uVar7,0);
    iVar6 = *piVar10;
    uVar1 = *puVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar1 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    uVar7 = func_0x014388d4(*puVar5);
    puVar5 = *(undefined4 **)(_UNK_02c06118 + 0x2c06050);
  }
  func_0x0152e3ec(uVar7,iVar2,*puVar5,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x02c33b8c(iVar6,uVar7,0);
LAB_02c0607c:
  FUN_02beb1d0(param_1);
  return 0;
}

