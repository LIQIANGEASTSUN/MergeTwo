/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemUsageTapCost$$get_TapCostItems RVA 0x1efee48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f0ee48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01f0ef6c + 0x1f0ee5c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0ef70 + 0x1f0ee70));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ef74 + 0x1f0ee7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa501,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa501,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02291f5c + 0x2291e7c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02291f60 + 0x2291e90),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02291f64 + 0x2291f4c));
    return iVar1;
  }
  piVar6 = *(int **)(_UNK_01f0ef78 + 0x1f0eed4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(param_1,0);
  if (iVar1 != 0) {
    uVar5 = func_0x0244ffd4(param_1,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar5,0);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        return *(int *)(param_1 + 0x14);
      }
      iVar1 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_01f0ef7c + 0x1f0ef4c));
      *(int *)(param_1 + 0x14) = iVar1;
      return iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}



// ===== FAT.MBItemUsageTapCost$$get_TapItemList RVA 0x1efef80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f0ef80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01f0f044 + 0x1f0ef94);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0f048 + 0x1f0efa8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0f04c + 0x1f0efb4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa502,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa502,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f0f050 + 0x1f0f018));
    func_0x03258f24(iVar1,2,**(undefined4 **)(_UNK_01f0f054 + 0x1f0f030));
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return iVar1;
}



// ===== FAT.MBItemUsageTapCost$$Refresh RVA 0x1eff058 =====

/* WARNING: Removing unreachable block (ram,0x02062428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0f058(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01f0f17c + 0x1f0f06c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0f180 + 0x1f0f080));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa503,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa503,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  func_0x022a26a4(param_1,0);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_01f0ef80(param_1);
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    }
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02116990(iVar7,0);
    uVar5 = FUN_01f0ef80(param_1);
    iVar1 = func_0x0216a2cc(uVar8,uVar5,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_01f0ee48(param_1);
    if (iVar1 != 0) {
      iVar7 = FUN_01f0ef80(param_1);
      pcVar6 = (char *)(_UNK_02062524 + 0x2062314);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02062528 + 0x2062328),iVar7,1,0);
        func_0x01384978(*(undefined4 *)(_UNK_0206252c + 0x2062334));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x0229f06c(0xa505,0);
      if (iVar2 == 0) {
        piVar9 = *(int **)(_UNK_02062530 + 0x2062398);
        uVar8 = *(undefined4 *)(iVar1 + 0x10);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x02450910(uVar8,0);
        if (iVar2 != 0) {
          uVar8 = *(undefined4 *)(iVar1 + 0x14);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x02450910(uVar8,0);
          if (iVar7 != 0) {
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = *(int *)(iVar7 + 0xc);
            }
            if (iVar2 != 0 && iVar3 != 0) {
              *(int *)(iVar1 + 0x48) = iVar7;
              func_0x02061a60(iVar1);
              *(undefined4 *)(iVar1 + 0x40) = 0;
              *(undefined4 *)(iVar1 + 0x44) = 0;
              iVar7 = *(int *)(iVar1 + 0x48);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              uVar4 = 0;
              if (0 < *(int *)(iVar7 + 0xc)) {
                uVar4 = *(uint *)(iVar1 + 0x44) & ~((int)*(uint *)(iVar1 + 0x44) >> 0x1f);
              }
              *(uint *)(iVar1 + 0x44) = uVar4;
              func_0x02062534(iVar1);
              uVar8 = *(undefined4 *)(iVar1 + 0x10);
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar7 = func_0x02450910(uVar8,0);
              if (iVar7 != 0) {
                iVar7 = *(int *)(iVar1 + 0x48);
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                iVar7 = *(int *)(iVar7 + 0xc);
                while( true ) {
                  iVar2 = *(int *)(iVar1 + 0x10);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x02450148(iVar2,0);
                  if (iVar2 <= iVar7) break;
                  iVar2 = *(int *)(iVar1 + 0x10);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x02450158(iVar2,iVar7,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x0244ffd4(iVar2,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244ffe4(iVar2,0,0);
                  iVar7 = iVar7 + 1;
                }
              }
            }
          }
        }
      }
      else {
        iVar2 = func_0x0229f13c(0xa505,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        func_0x02175630(iVar2,iVar1,iVar7,1);
      }
      return;
    }
  }
  return;
}



// ===== FAT.MBItemUsageTapCost$$.ctor RVA 0x1eff184 =====

void FUN_01f0f184(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBItemUsageTapCost$$<>iFixBaseProxy_Refresh RVA 0x1eff18c =====

void FUN_01f0f18c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa504,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa504);
  if (iVar1 == 0) {
    func_0x01384bf0();
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}


