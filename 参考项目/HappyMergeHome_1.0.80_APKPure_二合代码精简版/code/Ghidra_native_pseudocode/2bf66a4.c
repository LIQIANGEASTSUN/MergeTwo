
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c066a4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02c07150 + 0x2c066c0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c07154 + 0x2c066d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c07158 + 0x2c066e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0715c + 0x2c066ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c07160 + 0x2c066f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c07164 + 0x2c06704));
    func_0x01438628(*(undefined4 *)(_UNK_02c07168 + 0x2c06710));
    func_0x01438628(*(undefined4 *)(_UNK_02c0716c + 0x2c0671c));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5e8a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02873a70(iVar1,param_1,param_2,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  uVar10 = *(uint *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar10) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c3f4b4(iVar1,0);
  iVar5 = *(int *)(param_1 + 0x44);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar5 = *(int *)(iVar5 + param_2 * 4 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x02c3f4b4(iVar5,0);
  if (iVar1 != iVar5) {
    return 0;
  }
  piVar14 = *(int **)(_UNK_02c07170 + 0x2c06818);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar15 = *(undefined4 **)(_UNK_02c07174 + 0x2c06834);
  iVar1 = func_0x014e9518(*puVar15);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bad204(iVar1,param_2,uVar2,0);
  iVar5 = func_0x014e9518(*puVar15);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02bad204(iVar5,uVar2,uVar11,0);
  iVar6 = *(int *)(param_1 + 0x44);
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
  uVar2 = *(undefined4 *)(iVar6 + 0xc);
  if (*(int *)(**(int **)(_UNK_02c07178 + 0x2c068dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(uVar2,0,0);
  if (iVar6 != 0) {
    FUN_02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
    return 1;
  }
  if (*(int *)(**(int **)(_UNK_02c0717c + 0x2c0692c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c07180 + 0x2c06948));
  iVar7 = *(int *)(param_1 + 0x44);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar7 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar7 = *(int *)(iVar7 + param_2 * 4 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x02c3f4b4(iVar7,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x029a6fa8(iVar6,uVar2,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar6 + 0x1c) == 200) {
    return 1;
  }
  if (*(int *)(iVar6 + 0x1c) == 2) {
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar15);
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0xb0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = FUN_02bad204(iVar6,uVar2,uVar11,0);
    iVar7 = func_0x014e9518(*puVar15);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = FUN_02bad204(iVar7,param_2,uVar2,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar14 = *(int **)(_UNK_02c07184 + 0x2c06a7c);
    if (*(int *)(iVar6 + 0x28) < 1) {
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0x28) < 1) goto LAB_02c06a9c;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xb0);
    goto LAB_02c06b7c;
  }
LAB_02c06a9c:
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(*puVar15);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = FUN_02bad168(iVar6,param_2,uVar2,0);
  if (iVar6 == 0) {
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar15);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = FUN_02bad0f4(iVar6,iVar5,0);
    if (iVar6 != 0) goto LAB_02c06b30;
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar15);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = FUN_02bd11ec(iVar6,iVar1,0);
    if (iVar6 != 0) goto LAB_02c06e0c;
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar15);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = FUN_02bd10d0(iVar6,iVar5,0);
    if (iVar6 == 0) goto LAB_02c06e0c;
    if (*(int *)(**(int **)(_UNK_02c07188 + 0x2c06c20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c0718c + 0x2c06c3c));
    iVar7 = *(int *)(param_1 + 0x44);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar7 + param_2 * 4 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02c3f4b4(iVar7,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x029a6fa8(iVar6,uVar2,0);
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02c07190 + 0x2c06cb8));
    iVar8 = *(int *)(param_1 + 0x44);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar8 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar8 = *(int *)(iVar8 + param_2 * 4 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02c3f4b4(iVar8,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar7 + 0x4c);
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02c07194 + 0x2c06d3c));
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0x94) = 1;
      *(uint *)(param_1 + 0xa0) = param_2;
      uVar11 = FUN_02bf9d84(param_1,param_2,*(undefined4 *)(param_1 + 0xb0));
      uVar3 = FUN_02bf9f7c(param_1,param_2,*(undefined4 *)(param_1 + 0xb0));
      iVar6 = *(int *)(param_1 + 0x44);
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
      uStack_28 = func_0x02c3f4b4(iVar6,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar5 + 0xc) == 6) {
        uVar13 = 1;
      }
      else {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar13 = 0;
        if (*(int *)(iVar1 + 0xc) == 6) {
          uVar13 = 1;
        }
      }
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar15);
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      uVar12 = *(undefined4 *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_02bb18c4(iVar1,uVar12,0xffffffff,9,uVar9,0xffffffff,1,0xffffffff,
                   **(undefined4 **)(_UNK_02c07198 + 0x2c07034),0);
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x02c3f4b4(iVar1,0);
      FUN_02bf7238(param_1,param_2,uVar2,uVar9,uVar11,10,uVar3,uVar13);
      piVar14 = *(int **)(_UNK_02c0719c + 0x2c070d8);
      iVar1 = **(int **)(*piVar14 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b67abc(iVar1,2,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(*piVar14 + 0x5c);
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b65c74(iVar1,2,uVar2,0,0);
        return 1;
      }
      return 1;
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(int *)(iVar6 + 0x1c) - 0x12;
    if ((uVar10 < 0x10) && ((1 << (uVar10 & 0xff) & 0x8003U) != 0)) {
      iVar1 = *piVar14;
      *(uint *)(param_1 + 0xa0) = param_2;
      *(undefined1 *)(param_1 + 0x94) = 1;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar15);
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bad204(iVar1,uVar2,uVar11,0);
      iVar5 = func_0x014e9518(*puVar15);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = FUN_02bad204(iVar5,param_2,uVar2,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar5 + 0x74);
      iVar5 = func_0x014e9518(*puVar15);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar11 = *(undefined4 *)(param_1 + 0xb0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_02bb18c4(iVar5,uVar11,0xffffffff,9,uVar2,0xffffffff,1,0xffffffff,
                   **(undefined4 **)(_UNK_02c071a0 + 0x2c06f30),0);
      iVar5 = *(int *)(param_1 + 0x44);
      uVar2 = *(undefined4 *)(iVar6 + 8);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar5 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar5 = *(int *)(iVar5 + param_2 * 4 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar11 = func_0x02c3f4b4(iVar5,0);
      FUN_02bf7238(param_1,param_2,uVar2,uVar11,0,10,iVar7 + iVar1,0);
      return 1;
    }
  }
  else {
LAB_02c06b30:
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar15);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd10d0(iVar1,iVar5,0);
    if (iVar1 == 0) {
LAB_02c06e0c:
      FUN_02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
      return 1;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xa0) = param_2;
LAB_02c06b7c:
  func_0x02c071a4(param_1,uVar2,param_2);
  return 1;
}

