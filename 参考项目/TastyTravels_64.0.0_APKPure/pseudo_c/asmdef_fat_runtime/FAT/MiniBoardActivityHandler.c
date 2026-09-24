/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MiniBoardActivityHandler$$TryAdd RVA 0x1a921b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa21b4(uint *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar8 = (char *)(_UNK_01aa2614 + 0x1aa21d4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa2618 + 0x1aa21ec));
    func_0x01384978(*(undefined4 *)(_UNK_01aa261c + 0x1aa21f8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2620 + 0x1aa2204));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2624 + 0x1aa2210));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2628 + 0x1aa221c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa262c + 0x1aa2228));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2630 + 0x1aa2234));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  piStack_3c = (int *)0x0;
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x84a1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x84a1,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f134(&uStack_48,iVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    goto LAB_01aa22c4;
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x02b436dc(0,param_4,param_5,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar3 = func_0x02b439c4(0,param_4,param_5,&uStack_28,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
        goto LAB_01aa2398;
      }
      goto LAB_01aa23b4;
    }
LAB_01aa2340:
    uStack_44 = **(uint **)(_UNK_01aa2634 + 0x1aa2350);
    uVar7 = **(undefined4 **)(_UNK_01aa2638 + 0x1aa235c);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar3 = func_0x02b436dc(param_3,param_4,param_5,0);
    if (iVar3 != 0) goto LAB_01aa2340;
    iVar3 = func_0x02b439c4(param_3,param_4,param_5,&uStack_28,0);
    if (iVar3 != 0) {
LAB_01aa23b4:
      uVar7 = **(undefined4 **)(_UNK_01aa263c + 0x1aa23c4);
      puVar4 = *(uint **)(_UNK_01aa2640 + 0x1aa23d0);
      *param_1 = 0;
      param_1[1] = 0;
      uStack_44 = *puVar4;
      if (uStack_28 != 0) {
        uStack_44 = uStack_28;
      }
LAB_01aa23e4:
      uVar6 = 0;
      goto LAB_01aa23ec;
    }
LAB_01aa2398:
    iVar3 = func_0x02b438e8(param_3,param_4,param_5,0);
    if (iVar3 != 0) goto LAB_01aa23b4;
    if (*(int *)(**(int **)(_UNK_01aa2644 + 0x1aa2404) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02b4b9a8(&uStack_48,param_4,param_5,param_8,&uStack_38,0);
    uVar1 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uStack_44 = param_5;
      uStack_48 = param_4;
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01aa2648 + 0x1aa2454),&uStack_48);
      uVar7 = func_0x0244f690(**(undefined4 **)(_UNK_01aa264c + 0x1aa247c),uVar7,uVar1,0);
LAB_01aa2480:
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      func_0x02b45174(&uStack_50,param_3,param_4,param_5,uVar7,0);
      uStack_48 = uStack_50;
      uStack_44 = uStack_4c;
LAB_01aa22c4:
      *param_1 = uStack_48;
      param_1[1] = uStack_44;
      return;
    }
    func_0x01aa2660(&uStack_48,param_2,uStack_38,uStack_34,uStack_30,uStack_2c,param_6,&piStack_3c);
    piVar2 = piStack_3c;
    if (((byte)uStack_48 & 1) == 0) {
      uVar7 = **(undefined4 **)(_UNK_01aa265c + 0x1aa24f8);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01aa23e4;
    }
    if (piStack_3c == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    iVar3 = (**(code **)(iVar3 + 0x108))(piVar2,*(undefined4 *)(iVar3 + 0x10c));
    piVar2 = piStack_3c;
    if (iVar3 == 0) {
      uStack_44 = param_5;
      uStack_48 = param_4;
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01aa2650 + 0x1aa25e8),&uStack_48);
      uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_01aa2654 + 0x1aa260c),uVar7,0);
      goto LAB_01aa2480;
    }
    if (piStack_3c == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    (**(code **)(iVar3 + 0x168))(piVar2,param_7,*(undefined4 *)(iVar3 + 0x16c));
    func_0x01aa294c(param_2,piStack_3c,param_7 == 0);
    func_0x02b4bb18(param_8,piStack_3c,0);
    piVar2 = piStack_3c;
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    func_0x02b47690(param_3,param_4,param_5,piVar2,param_7 == 0,0);
    uStack_44 = 0;
    puVar5 = *(undefined4 **)(_UNK_01aa2658 + 0x1aa25cc);
    *param_1 = 0;
    param_1[1] = 0;
    uVar7 = *puVar5;
  }
  uVar6 = 1;
LAB_01aa23ec:
  func_0x038f3b0c(param_1,uVar6,uStack_44,uVar7);
  return;
}



// ===== FAT.MiniBoardActivityHandler$$_TryCreateAct RVA 0x1a92660 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa2660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01aa2914 + 0x1aa2680);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa2918 + 0x1aa2698));
    func_0x01384978(*(undefined4 *)(_UNK_01aa291c + 0x1aa26a4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2920 + 0x1aa26b0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2924 + 0x1aa26bc));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2928 + 0x1aa26c8));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x84a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84a2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225a3b0(&uStack_30,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    return;
  }
  *param_8 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01aa2a10(iVar1);
  if (iVar1 == 0) {
    uStack_2c = **(undefined4 **)(_UNK_01aa292c + 0x1aa2860);
    uVar5 = **(undefined4 **)(_UNK_01aa2930 + 0x1aa286c);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca8aa8(iVar1,param_5,0);
    if (iVar1 == 0) {
      uStack_2c = **(undefined4 **)(_UNK_01aa2934 + 0x1aa2888);
      puVar2 = *(undefined4 **)(_UNK_01aa2938 + 0x1aa2894);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01aa293c + 0x1aa27ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02b4c2a0(&uStack_30,param_3,param_4,param_5,param_6,param_7,&uStack_28,0);
      if (((byte)uStack_30 & 1) != 0) {
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01aa2944 + 0x1aa28bc));
        func_0x01aa2a98();
        uVar5 = uStack_28;
        *param_8 = iVar3;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01aa2c9c(iVar3,uVar5,iVar1);
        uStack_2c = 0;
        puVar2 = *(undefined4 **)(_UNK_01aa2948 + 0x1aa2900);
        *param_1 = 0;
        param_1[1] = 0;
        uVar5 = *puVar2;
        uVar4 = 1;
        goto LAB_01aa28a4;
      }
      puVar2 = *(undefined4 **)(_UNK_01aa2940 + 0x1aa284c);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = *puVar2;
  }
  uVar4 = 0;
LAB_01aa28a4:
  func_0x038f3b0c(param_1,uVar4,uStack_2c,uVar5);
  return;
}



// ===== FAT.MiniBoardActivityHandler$$_TryCreateMiniBoardData RVA 0x1a9294c =====

void FUN_01aa294c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x84a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
    func_0x01aa2d50(0,param_2);
    func_0x01384bf0();
  }
  else {
    func_0x01aa2d50(iVar1,param_2);
  }
  iVar2 = func_0x0229f06c(0x84aa,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x84aa,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485228(&uStack_38,param_3,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  func_0x01aa2fac(iVar1);
  uVar5 = 0;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (*(int *)(iVar1 + 8) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 8) + 0x40);
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01ca8b0c(iVar2,uVar5,0);
  if (iVar2 == 0) {
    return;
  }
  func_0x01aa66b8(iVar1,*(undefined4 *)(iVar2 + 0x14),1);
  func_0x01aa603c(iVar1);
  func_0x01aa6af4(iVar1);
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0x5f6f,0);
  if (iVar2 == 0) {
    iVar2 = func_0x0229f06c(0x5baf,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
      *(undefined1 *)(iVar1 + 0x18) = 1;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
      }
      iVar2 = func_0x0229f06c(0x5bb0,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x1c);
        *(undefined1 *)(iVar1 + 0x24) = 1;
        if (iVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        return;
      }
      iVar2 = func_0x0229f13c(0x5bb0,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x5baf,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5f6f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.MiniBoardActivityHandler$$End RVA 0x1a92eb8 =====

/* WARNING: Removing unreachable block (ram,0x01aa2db0) */
/* WARNING: Removing unreachable block (ram,0x01aa6088) */
/* WARNING: Removing unreachable block (ram,0x01aa6094) */
/* WARNING: Removing unreachable block (ram,0x01aa6098) */
/* WARNING: Removing unreachable block (ram,0x01aa60b0) */
/* WARNING: Removing unreachable block (ram,0x01aa60b4) */
/* WARNING: Removing unreachable block (ram,0x01aa60c0) */
/* WARNING: Removing unreachable block (ram,0x01aa60c4) */
/* WARNING: Removing unreachable block (ram,0x02159fe8) */
/* WARNING: Removing unreachable block (ram,0x0215a000) */
/* WARNING: Removing unreachable block (ram,0x0215a004) */
/* WARNING: Removing unreachable block (ram,0x0217741c) */
/* WARNING: Removing unreachable block (ram,0x02177428) */
/* WARNING: Removing unreachable block (ram,0x02177464) */
/* WARNING: Removing unreachable block (ram,0x02177468) */
/* WARNING: Removing unreachable block (ram,0x02177474) */
/* WARNING: Removing unreachable block (ram,0x02177478) */
/* WARNING: Removing unreachable block (ram,0x0215a01c) */
/* WARNING: Removing unreachable block (ram,0x0215a030) */
/* WARNING: Removing unreachable block (ram,0x0215a034) */
/* WARNING: Removing unreachable block (ram,0x0215a040) */
/* WARNING: Removing unreachable block (ram,0x0215a044) */
/* WARNING: Removing unreachable block (ram,0x0215a07c) */
/* WARNING: Removing unreachable block (ram,0x02155388) */
/* WARNING: Removing unreachable block (ram,0x021553d4) */
/* WARNING: Removing unreachable block (ram,0x021553a4) */
/* WARNING: Removing unreachable block (ram,0x021553bc) */
/* WARNING: Removing unreachable block (ram,0x021553c0) */
/* WARNING: Removing unreachable block (ram,0x01aa6058) */
/* WARNING: Removing unreachable block (ram,0x01aa6070) */
/* WARNING: Removing unreachable block (ram,0x01aa6074) */
/* WARNING: Removing unreachable block (ram,0x02173f80) */
/* WARNING: Removing unreachable block (ram,0x02173fd4) */
/* WARNING: Removing unreachable block (ram,0x02173fe0) */
/* WARNING: Removing unreachable block (ram,0x02174008) */
/* WARNING: Removing unreachable block (ram,0x0217400c) */
/* WARNING: Removing unreachable block (ram,0x02174018) */
/* WARNING: Removing unreachable block (ram,0x0217401c) */

void FUN_01aa2eb8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x84b1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02b449f8(iVar4,0);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b449f8(param_3,0);
    if (iVar4 == iVar2) {
      func_0x01aa2fac(iVar1);
      iVar4 = func_0x0229f06c(0x84a8,0);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar1 + 8) = 0;
        return;
      }
      iVar4 = func_0x0229f13c(0x84a8,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar4 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar1,0);
      func_0x01485278(&uStack_38,0,0);
      iVar2 = *(int *)(iVar4 + 8);
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar2,uVar5,&uStack_38,uVar3,0,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x84b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x0217b4e8(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MiniBoardActivityHandler$$.ctor RVA 0x1a93090 =====

void FUN_01aa3090(void)

{
  return;
}



// ===== FAT.MiniBoardActivityHandler$$<>iFixBaseProxy_TryAdd RVA 0x1a93098 =====

void FUN_01aa3098(undefined4 *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  func_0x02b4b574(&uStack_18);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.MiniBoardActivityHandler$$<>iFixBaseProxy_End RVA 0x1a930e4 =====

void FUN_01aa30e4(void)

{
  func_0x02b4c8a0();
  return;
}


