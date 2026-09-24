
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c02bf8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02c03258 + 0x2c02c14);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0325c + 0x2c02c28));
    func_0x01438628(*(undefined4 *)(_UNK_02c03260 + 0x2c02c34));
    func_0x01438628(*(undefined4 *)(_UNK_02c03264 + 0x2c02c40));
    func_0x01438628(*(undefined4 *)(_UNK_02c03268 + 0x2c02c4c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0326c + 0x2c02c58));
    func_0x01438628(*(undefined4 *)(_UNK_02c03270 + 0x2c02c64));
    func_0x01438628(*(undefined4 *)(_UNK_02c03274 + 0x2c02c70));
    func_0x01438628(*(undefined4 *)(_UNK_02c03278 + 0x2c02c7c));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5ed4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ed4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02873a70(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_02c0327c + 0x2c02ce4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c03280 + 0x2c02d00));
  iVar5 = *(int *)(param_1 + 0x44);
  uVar8 = *(uint *)(param_1 + 0xb0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar8) {
    func_0x014388e8();
  }
  iVar5 = *(int *)(iVar5 + uVar8 * 4 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x02c3f4b4(iVar5,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar2,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x1c) != 0x1e) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  if (*(int *)(iVar1 + param_2 * 4 + 0x10) == 0) {
    return 0;
  }
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
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  if (*(int *)(**(int **)(_UNK_02c03284 + 0x2c02df4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar2,0,0);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02c03288 + 0x2c02e30) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar10 = *(undefined4 **)(_UNK_02c0328c + 0x2c02e4c);
  iVar1 = func_0x014e9518(*puVar10);
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
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(undefined4 *)(iVar5 + 0x1c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02c4acc8(iVar1,uVar2,0);
  iVar1 = func_0x014e9518(*puVar10);
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
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(undefined4 *)(iVar5 + 0x1c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x02c4ab04(iVar1,uVar2,0);
  if ((uVar8 | uVar3) == 1) {
    piVar11 = *(int **)(_UNK_02c03290 + 0x2c02f48);
    uStack_28 = 0;
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c03294 + 0x2c02f68));
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
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(iVar5 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd8b98(iVar1,param_2,uVar9,&uStack_28,uVar2,0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c03298 + 0x2c0300c));
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
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(iVar6 + 0x11c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar7 + param_2 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar6 + 0x1c);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = FUN_02bd8188(iVar5,uVar2,uVar9,&uStack_28,0);
    if (uVar8 == 0) {
LAB_02c0322c:
      if (iVar1 < 1 && iVar5 < 1) goto LAB_02c03218;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02c0329c + 0x2c030f8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c032a0 + 0x2c03114));
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
      iVar7 = *(int *)(iVar7 + 0xc);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = *(undefined4 *)(iVar7 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_02bd6ae8(iVar6,param_2,uVar9,&uStack_28,uVar2,0);
      if (iVar6 < 1) goto LAB_02c0322c;
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
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x11c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x38);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if ((iVar1 < 1 && iVar5 < 1) && 0 < *(int *)(iVar6 + 0xc)) goto LAB_02c03218;
    }
    *(uint *)(param_1 + 0xb4) = param_2;
    FUN_02bff75c(param_1,param_2,1);
  }
  else {
LAB_02c03218:
    FUN_02c02b84(param_1,param_2);
  }
  return 1;
}

