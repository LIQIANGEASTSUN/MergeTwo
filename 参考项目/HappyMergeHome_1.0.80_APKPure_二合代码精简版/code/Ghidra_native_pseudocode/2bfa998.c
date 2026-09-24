
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0a998(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02c0b1fc + 0x2c0a9b4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0b200 + 0x2c0a9c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b204 + 0x2c0a9d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b208 + 0x2c0a9e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b20c + 0x2c0a9ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b210 + 0x2c0a9f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b214 + 0x2c0aa04));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b218 + 0x2c0aa10));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b21c + 0x2c0aa1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b220 + 0x2c0aa28));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b224 + 0x2c0aa34));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b228 + 0x2c0aa40));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b22c + 0x2c0aa4c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b230 + 0x2c0aa58));
    func_0x01438628(*(undefined4 *)(_UNK_02c0b234 + 0x2c0aa64));
    *pcVar3 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5ece,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ece,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02873a70(iVar1,param_1,param_2,0);
    return uVar2;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c0b238 + 0x2c0aacc));
  func_0x02c45dd8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0x014385cc((int *)(iVar1 + 0xc),param_1);
  iVar4 = *(int *)(param_1 + 0x44);
  uVar9 = *(uint *)(param_1 + 0xb0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar9) {
    func_0x014388e8();
  }
  iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  piVar11 = *(int **)(_UNK_02c0b23c + 0x2c0ab40);
  uVar2 = *(undefined4 *)(iVar4 + 0xc);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x024eec50(uVar2,0,0);
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  uVar9 = *(uint *)(param_1 + 0xb0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar9) {
    func_0x014388e8();
  }
  iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x1c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar4 + 0x1c) != 0x1e) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  uVar9 = *(uint *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar9) {
    func_0x014388e8();
  }
  if (*(int *)(iVar4 + uVar9 * 4 + 0x10) != 0) {
    iVar4 = *(int *)(param_1 + 0x44);
    uVar9 = *(uint *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar9) {
      func_0x014388e8();
    }
    iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar4 + 0xc);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024eec50(uVar2,0,0);
    if (iVar4 != 0) goto LAB_02c0b080;
    if (*(int *)(**(int **)(_UNK_02c0b240 + 0x2c0ac7c) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_02c0b244 + 0x2c0ac98);
    iVar4 = func_0x014e9518(*puVar12);
    iVar5 = *(int *)(param_1 + 0x44);
    uVar9 = *(uint *)(iVar1 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar9) {
      func_0x014388e8();
    }
    iVar5 = *(int *)(iVar5 + uVar9 * 4 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x1c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x02c4acc8(iVar4,uVar2,0);
    iVar4 = func_0x014e9518(*puVar12);
    iVar5 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(iVar1 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar5 = *(int *)(iVar5 + uVar6 * 4 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x1c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02c4ab04(iVar4,uVar2,0);
    if ((uVar9 | uVar6) != 1) goto LAB_02c0b080;
    piVar11 = *(int **)(_UNK_02c0b248 + 0x2c0ad9c);
    uStack_28 = 0;
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c0b24c + 0x2c0adbc));
    iVar5 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(iVar1 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar5 = *(int *)(iVar5 + uVar6 * 4 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = *(undefined4 *)(iVar5 + 0x1c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02bd8b98(iVar4,uVar6,uVar10,&uStack_28,uVar2,0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c0b250 + 0x2c0ae64));
    iVar7 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(iVar1 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar7 + uVar6 * 4 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar7 + 0x11c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar8 + uVar6 * 4 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar7 + 0x1c);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = FUN_02bd8188(iVar5,uVar2,uVar10,&uStack_28,0);
    if (uVar9 != 0) {
      if (*(int *)(**(int **)(_UNK_02c0b254 + 0x2c0af58) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02c0b258 + 0x2c0af74));
      iVar8 = *(int *)(param_1 + 0x44);
      uVar9 = *(uint *)(iVar1 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar9) {
        func_0x014388e8();
      }
      iVar8 = *(int *)(iVar8 + uVar9 * 4 + 0x10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar10 = *(undefined4 *)(iVar8 + 0x1c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = FUN_02bd6ae8(iVar7,uVar9,uVar10,&uStack_28,uVar2,0);
      if (0 < iVar7) {
        iVar7 = *(int *)(param_1 + 0x44);
        uVar9 = *(uint *)(iVar1 + 8);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar9) {
          func_0x014388e8();
        }
        iVar7 = *(int *)(iVar7 + uVar9 * 4 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0xc);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x11c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x38);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if ((iVar4 < 1 && iVar5 < 1) && 0 < *(int *)(iVar7 + 0xc)) goto LAB_02c0b080;
        goto LAB_02c0b0c0;
      }
    }
    if (0 < iVar4 || 0 < iVar5) {
LAB_02c0b0c0:
      puVar12 = *(undefined4 **)(_UNK_02c0b25c + 0x2c0b0cc);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0xb0);
      iVar4 = func_0x014388d4(*puVar12);
      func_0x02a32c7c(iVar4,0);
      if (*(int *)(**(int **)(_UNK_02c0b260 + 0x2c0b0f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202bb70(0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x0202bc14(iVar5,**(undefined4 **)(_UNK_02c0b264 + 0x2c0b128),0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar4 + 0xc) = uVar2;
      func_0x014385cc((undefined4 *)(iVar4 + 0xc),uVar2);
      puVar12 = *(undefined4 **)(_UNK_02c0b268 + 0x2c0b160);
      *(undefined1 *)(iVar4 + 0x18) = 1;
      uVar2 = func_0x014388d4(*puVar12);
      func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02c0b26c + 0x2c0b180),0);
      *(undefined4 *)(iVar4 + 0x10) = uVar2;
      func_0x014385cc((undefined4 *)(iVar4 + 0x10),uVar2);
      uVar2 = func_0x014388d4(*puVar12);
      func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02c0b270 + 0x2c0b1b8),0);
      *(undefined4 *)(iVar4 + 0x1c) = uVar2;
      func_0x014385cc((undefined4 *)(iVar4 + 0x1c),uVar2);
      if (*(int *)(**(int **)(_UNK_02c0b274 + 0x2c0b1dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x02aef2ec(iVar4,0);
      return 1;
    }
  }
LAB_02c0b080:
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 8);
  iVar4 = FUN_02bfb30c(param_1);
  if (iVar4 != 0) {
    FUN_02c071a4(param_1,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(iVar1 + 8));
  }
  return 1;
}

