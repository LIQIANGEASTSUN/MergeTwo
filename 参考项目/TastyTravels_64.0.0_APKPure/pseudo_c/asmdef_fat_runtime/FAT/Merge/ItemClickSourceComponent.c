/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemClickSourceComponent$$get_isNoCD RVA 0x2112810 =====

uint FUN_02122810(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x1476,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1476,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(0 < *(int *)(param_1 + 100));
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_noCDMilliLeft RVA 0x2112874 =====

undefined4 FUN_02122874(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb392,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb392,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_maxNoCDMilli RVA 0x21128c8 =====

undefined4 FUN_021228c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb393,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb393,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_outputCountToDead RVA 0x211291c =====

undefined4 FUN_0212291c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d11,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_willDead RVA 0x2112970 =====

uint FUN_02122970(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0xb394,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb394,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 100)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 100);
    iVar1 = FUN_0212291c(param_1);
    return (uint)(iVar4 <= iVar1 + 1);
  }
  return 0;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_isDead RVA 0x2112a10 =====

uint FUN_02122a10(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x9e0a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e0a,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 100)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 100);
    iVar1 = FUN_0212291c(param_1);
    return (uint)(iVar4 <= iVar1);
  }
  return 0;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_energyCost RVA 0x2112ab0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02122ab0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  iVar1 = func_0x0229f06c(0x162b,0);
  if (iVar1 == 0) {
    iVar8 = 0;
    iVar1 = func_0x0229f06c(0x162c,0);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(*(int *)(param_1 + 0x74) + 0x14) == 0x1f)) {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar1 + 0x2e) == '\0') {
          iVar8 = 1;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x3c);
          if (iVar8 < 1) {
            pcVar7 = (char *)(_UNK_021629ac + 0x216287c);
            if (*pcVar7 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_021629b0 + 0x2162890),0);
              *pcVar7 = '\x01';
            }
            iVar1 = func_0x0229f06c(0xef5,0);
            if (iVar1 != 0) {
              iVar1 = func_0x0229f13c(0xef5,0);
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
              func_0x01485238(&uStack_30,0xffffffff,0);
              iVar8 = *(int *)(iVar1 + 8);
              uVar9 = *(undefined4 *)(iVar1 + 0xc);
              iVar1 = *(int *)(iVar1 + 0x10);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              uVar6 = 2;
              if (iVar1 == 0) {
                uVar6 = 1;
              }
              func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
              iVar1 = func_0x0245498c(&uStack_30,0,0);
              return iVar1;
            }
            piVar2 = (int *)func_0x021566f4();
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar2;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_021629b4 + 0x2162908)) {
                  puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x180);
                  goto LAB_02162950;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)
                     func_0x014002dc(piVar2,**(int **)(_UNK_021629b4 + 0x2162908),0x18);
LAB_02162950:
            uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01cab92c(iVar1,uVar9,0);
            if (iVar1 == 0) {
              iVar1 = 1;
            }
            else {
              iVar1 = *(int *)(iVar1 + 0x1c);
            }
            return iVar1;
          }
        }
      }
      return iVar8;
    }
    iVar1 = func_0x0229f13c(0x162c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x162b,0);
    if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.Merge.ItemClickSourceComponent$$_CheckEnergyCost RVA 0x2112b08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02122b08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar7 = 0;
  iVar1 = func_0x0229f06c(0x162c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x162c,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(*(int *)(param_1 + 0x74) + 0x14) == 0x1f)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 0x2e) == '\0') {
      iVar7 = 1;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x3c);
      if (iVar7 < 1) {
        pcVar8 = (char *)(_UNK_021629ac + 0x216287c);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_021629b0 + 0x2162890),0);
          *pcVar8 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xef5,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0xef5,0);
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
          func_0x01485238(&uStack_30,0xffffffff,0);
          iVar7 = *(int *)(iVar1 + 8);
          uVar9 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar6 = 2;
          if (iVar1 == 0) {
            uVar6 = 1;
          }
          func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
          iVar1 = func_0x0245498c(&uStack_30,0,0);
          return iVar1;
        }
        piVar2 = (int *)func_0x021566f4();
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_021629b4 + 0x2162908)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x180);
              goto LAB_02162950;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021629b4 + 0x2162908),0x18);
LAB_02162950:
        uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01cab92c(iVar1,uVar9,0);
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x1c);
        }
        return iVar1;
      }
    }
  }
  return iVar7;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_firstCost RVA 0x2112bb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02122bb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0xb395,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229c868 + 0x229c788);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229c86c + 0x229c79c),param_1,0);
      *pcVar4 = '\x01';
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229c870 + 0x229c858));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_costConfig RVA 0x2112c08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02122c08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x9df6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9df6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
      *pcVar4 = '\x01';
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x18);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_outputMilli RVA 0x2112c6c =====

undefined4 FUN_02122c6c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed0,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_isOutputing RVA 0x2112cc0 =====

uint FUN_02122cc0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x5ecf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ecf,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(0 < *(int *)(param_1 + 0x58));
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_isBoostItem RVA 0x2112d24 =====

undefined4 FUN_02122d24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x9fad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fad,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    if (*(char *)(iVar1 + 0x2d) != '\0') {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_isReviving RVA 0x2112da4 =====

undefined4 FUN_02122da4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x5e7c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e7c,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x02122e38(param_1);
  if (0 < iVar1) {
    iVar1 = func_0x02122ee0(param_1);
    iVar4 = *(int *)(param_1 + 0x4c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    if (iVar1 < *(int *)(iVar4 + 0x34)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_reviveTotalMilli RVA 0x2112e38 =====

int FUN_02122e38(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e7d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e7d,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar3 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x28);
    }
  }
  return iVar1 * 1000;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_totalItemCount RVA 0x2112ee0 =====

int FUN_02122ee0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e7a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e7a,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = func_0x02122f48(param_1);
  iVar3 = func_0x02122f9c(param_1);
  return iVar3 + iVar1;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_itemInRechargeCount RVA 0x2112f48 =====

undefined4 FUN_02122f48(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e7b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e7b,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_itemCount RVA 0x2112f9c =====

undefined4 FUN_02122f9c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1475,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1475,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_02122810(param_1);
  uVar4 = 100;
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x54);
  }
  return uVar4;
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_reviveMilli RVA 0x2113004 =====

undefined4 FUN_02123004(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e7e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e7e,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_config RVA 0x2113058 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02123058(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x165e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x165e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d1114 + 0x21d1034);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d1118 + 0x21d1048),param_1,0);
      *pcVar4 = '\x01';
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d111c + 0x21d1104));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.Merge.ItemClickSourceComponent$$get_mAllowCharging RVA 0x21130ac =====

uint FUN_021230ac(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0xb396,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb396,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x30) == '\0') {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x30) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(*(int *)(param_1 + 0x54) == 0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemClickSourceComponent$$FAT.Merge.IEffectReceiver.WillReceiveEffect RVA 0x2113148 =====

uint FUN_02123148(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0xb397,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb397,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x58) < 1) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x44) < 1) {
      return 0;
    }
  }
  return (uint)(param_2 != 0);
}



// ===== FAT.Merge.ItemClickSourceComponent$$Validate RVA 0x21131ec =====

undefined4 FUN_021231ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0xb398,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb398,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x20) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnSerialize RVA 0x2113258 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02123258(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  pcVar3 = (char *)(_UNK_02123508 + 0x2123274);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212350c + 0x2123288));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb399,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb399,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x02123514(param_1,param_2);
  iVar1 = func_0x02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02116f08(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02140d24(iVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02123510 + 0x212333c));
  func_0x0179d6e0(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x28);
    uVar8 = *(undefined4 *)(param_1 + 0x50);
    uRam0000002c = uVar4;
    if (iVar1 != 0) goto LAB_02123390;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x28);
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    uRam0000003c = uVar8;
    if (iVar1 != 0) goto LAB_02123398;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x28);
    uRam00000028 = uVar4;
    if (iVar1 != 0) goto LAB_0212339c;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x28);
    uRam00000018 = uVar2;
    if (iVar1 != 0) goto LAB_021233a0;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x28);
    uRam00000020 = 0;
    uRam00000024 = 0;
    if (iVar1 != 0) goto LAB_021233ac;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x28);
    uRam00000010 = 0;
    uRam00000014 = 0;
    if (iVar1 == 0) goto LAB_02123504;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x2c) = uVar4;
LAB_02123390:
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x3c) = uVar8;
LAB_02123398:
    *(undefined4 *)(iVar1 + 0x28) = uVar4;
LAB_0212339c:
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
LAB_021233a0:
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
LAB_021233ac:
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar7;
  iVar5 = func_0x021235bc(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x38) = iVar5 + 1;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar7 = func_0x02123628(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(param_2 + 0x28);
  iVar5 = *(int *)(param_1 + 100);
  *(undefined4 *)(iVar1 + 0x34) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
    iVar9 = *(int *)(param_2 + 0x28);
    iRam00000030 = iVar5 / 1000;
    uVar6 = *(undefined1 *)(param_1 + 0x6c);
    if (iVar9 == 0) {
      func_0x01384bf0();
      iVar9 = *(int *)(param_2 + 0x28);
      uRam00000040 = uVar6;
      if (iVar9 == 0) {
LAB_02123504:
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_02123458;
    }
  }
  else {
    uVar6 = *(undefined1 *)(param_1 + 0x6c);
    *(int *)(iVar9 + 0x30) = iVar5 / 1000;
  }
  *(undefined1 *)(iVar9 + 0x40) = uVar6;
LAB_02123458:
  *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(param_1 + 0x70);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnDeserialize RVA 0x2113694 =====

/* WARNING: Possible PIC construction at 0x021236f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021236f4) */
/* WARNING: Removing unreachable block (ram,0x021236fc) */
/* WARNING: Removing unreachable block (ram,0x02123700) */
/* WARNING: Removing unreachable block (ram,0x0212370c) */
/* WARNING: Removing unreachable block (ram,0x02123760) */
/* WARNING: Removing unreachable block (ram,0x02123798) */
/* WARNING: Removing unreachable block (ram,0x021237b8) */
/* WARNING: Removing unreachable block (ram,0x021237d0) */
/* WARNING: Removing unreachable block (ram,0x021237b0) */
/* WARNING: Removing unreachable block (ram,0x02123778) */
/* WARNING: Removing unreachable block (ram,0x02123754) */
/* WARNING: Removing unreachable block (ram,0x0212377c) */
/* WARNING: Removing unreachable block (ram,0x02123784) */
/* WARNING: Removing unreachable block (ram,0x0212378c) */
/* WARNING: Removing unreachable block (ram,0x02123794) */

void FUN_02123694(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  
  iVar1 = func_0x0229f06c(0xb39a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5c62,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x5c62,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x21236f4;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0xb39a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$CanConsumeItem RVA 0x21138b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021238b8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  pcVar9 = (char *)(_UNK_02123ab8 + 0x21238d4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02123abc + 0x21238e8));
    func_0x01384978(*(undefined4 *)(_UNK_02123ac0 + 0x21238f4));
    func_0x01384978(*(undefined4 *)(_UNK_02123ac4 + 0x2123900));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b9d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b9d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar8,0,0);
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = FUN_02122ab0(param_1);
  if (iVar1 < 1) {
    iVar1 = 0;
    piVar12 = *(int **)(_UNK_02123ac8 + 0x2123984);
    while( true ) {
      iVar10 = FUN_02123058(param_1);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0x18);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0xc);
      if (iVar10 <= iVar1) break;
      iVar2 = FUN_02123058(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar2,iVar1,**(undefined4 **)(_UNK_02123acc + 0x21239f8));
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x1e0);
            goto LAB_02123a6c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0x24);
LAB_02123a6c:
      iVar2 = (*(code *)*puVar4)(piVar3,uVar11,puVar4[1]);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x14);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_0210e2d4(param_2,0);
        if (iVar2 == iVar5) {
          return (uint)(iVar1 < iVar10);
        }
      }
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}



// ===== FAT.Merge.ItemClickSourceComponent$$SimulateOutput RVA 0x2113ad0 =====

void FUN_02123ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xab50,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xab50,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$StartBoostItem RVA 0x2113b38 =====

void FUN_02123b38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9e84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e84,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$WasBoostItem RVA 0x2113ba4 =====

uint FUN_02123ba4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0x9fae,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9fae,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  bVar1 = *(byte *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return (uint)bVar1;
}



// ===== FAT.Merge.ItemClickSourceComponent$$ConsumeNextItem RVA 0x2113c00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02123c00(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iStack_30;
  int iStack_2c;
  char cStack_25;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_02124144 + 0x2123c1c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02124148 + 0x2123c30));
    func_0x01384978(*(undefined4 *)(_UNK_0212414c + 0x2123c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02124150 + 0x2123c48));
    func_0x01384978(*(undefined4 *)(_UNK_02124154 + 0x2123c54));
    func_0x01384978(*(undefined4 *)(_UNK_02124158 + 0x2123c60));
    func_0x01384978(*(undefined4 *)(_UNK_0212415c + 0x2123c6c));
    func_0x01384978(*(undefined4 *)(_UNK_02124160 + 0x2123c78));
    *pcVar8 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  uStack_24 = 0;
  cStack_25 = '\0';
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9e04,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e04,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02286238(iVar1,param_1,param_2,0);
    return iVar1;
  }
  *param_2 = 0;
  iVar1 = func_0x02124184(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02122810(param_1);
  iVar9 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  }
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (0 < *(int *)(iVar9 + 100)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  if (iVar1 < 1) {
    iVar1 = func_0x02124444(param_1,&iStack_1c,0);
    piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02124164 + 0x2123d78),1);
    iStack_30 = iVar1;
    iVar9 = func_0x01384abc(**(undefined4 **)(_UNK_02124168 + 0x2123d90),&iStack_30);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar9 != 0) && (iVar2 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if (piVar3[3] == 0) {
      func_0x01384bf4();
    }
    piVar3[4] = iVar9;
    if (*(int *)(**(int **)(_UNK_0212416c + 0x2123df4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c23bc(**(undefined4 **)(_UNK_02124170 + 0x2123e18),piVar3,0);
  }
  else {
    iStack_1c = *(int *)(param_1 + 0x48);
    func_0x0212421c(param_1);
  }
  iVar2 = func_0x021720d4(iVar1,&iStack_20,0);
  iVar9 = iStack_20;
  if (iVar2 == 0) {
    iVar9 = iVar1;
  }
  *param_2 = iVar9;
  if (0 < iVar9) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 0x2e) != '\0') {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02124174 + 0x2123e88)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x178);
            goto LAB_02123ed0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02124174 + 0x2123e88),0x17);
LAB_02123ed0:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (((iVar1 != 0) && (iStack_1c - 5U < 2)) &&
         (iVar1 = func_0x0215c4c8(0xffffffff,0), 0 < iVar1)) {
        iVar9 = func_0x021635b4(iVar9,iVar1,&uStack_24,&cStack_25,0);
        *(undefined4 *)(param_1 + 0x3c) = uStack_24;
        *(char *)(param_1 + 0x40) = cStack_25;
        if (cStack_25 != '\0') {
          uVar5 = func_0x02162868(0xffffffff,0);
          func_0x019a9f08(uVar5,iVar9,uStack_24,0);
        }
      }
      if (iVar9 < 1) goto LAB_02123f9c;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (((*(char *)(iVar1 + 0x2d) != '\0') && (0 < *(int *)(param_1 + 0x70))) &&
       (*(char *)(param_1 + 0x40) == '\0')) {
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02feb690(iVar1,&iStack_2c,0,**(undefined4 **)(_UNK_02124178 + 0x2124000));
      if (iStack_2c == 0) {
        uVar5 = 1;
      }
      else {
        piVar3 = (int *)func_0x02124bc4();
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_0212417c + 0x2124038)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_02124088;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0212417c + 0x2124038),0);
LAB_02124088:
        uVar5 = (*(code *)*puVar4)(piVar3,0,puVar4[1]);
      }
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02124180 + 0x21240c8)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x188);
            goto LAB_02124110;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02124180 + 0x21240c8),0x19);
LAB_02124110:
      iVar9 = (*(code *)*puVar4)(piVar3,iVar9,uVar5,puVar4[1]);
      iVar1 = *(int *)(param_1 + 0x70);
      goto LAB_02124130;
    }
  }
LAB_02123f9c:
  if (*(char *)(param_1 + 0x40) == '\0') {
    return iVar9;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x2d) == '\0') {
    return iVar9;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 < 1) {
    return iVar9;
  }
LAB_02124130:
  *(int *)(param_1 + 0x70) = iVar1 + -1;
  return iVar9;
}



// ===== FAT.Merge.ItemClickSourceComponent$$IsNextItemReady RVA 0x2114184 =====

undefined4 FUN_02124184(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9df5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9df5,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = FUN_02116ae0(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = FUN_02122f9c(param_1);
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemClickSourceComponent$$StartNoCD RVA 0x2114c28 =====

void FUN_02124c28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9e82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(int *)(param_1 + 100) = param_2 * 1000;
  *(int *)(param_1 + 0x68) = param_2 * 1000;
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02116f08(iVar1,0);
  uVar4 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x25f,0,4,0);
  if (iVar3 == 0) {
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02148f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),uVar4,4,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x25f,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02180430(iVar3,iVar1,uVar4,4);
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$GetToastTypeForItem RVA 0x2114ce4 =====

/* WARNING: Removing unreachable block (ram,0x02125014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02124ce4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_0212529c + 0x2124d04);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021252a0 + 0x2124d18));
    func_0x01384978(*(undefined4 *)(_UNK_021252a4 + 0x2124d24));
    func_0x01384978(*(undefined4 *)(_UNK_021252a8 + 0x2124d30));
    func_0x01384978(*(undefined4 *)(_UNK_021252ac + 0x2124d3c));
    func_0x01384978(*(undefined4 *)(_UNK_021252b0 + 0x2124d48));
    func_0x01384978(*(undefined4 *)(_UNK_021252b4 + 0x2124d54));
    *pcVar10 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9e07,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e07,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02286340(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return 0;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca53f0(iVar1,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_021252b8 + 0x2124e18)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
        goto LAB_02124e60;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021252b8 + 0x2124e18),0);
LAB_02124e60:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  uVar6 = 7;
  piVar8 = *(int **)(_UNK_021252bc + 0x2124e84);
  piVar11 = *(int **)(_UNK_021252c0 + 0x2124e8c);
LAB_02124e88:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar8) {
        puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_02124ee4;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar8,0);
LAB_02124ee4:
  iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar1 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar11) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02124f5c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar11,0);
LAB_02124f5c:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0xc) == param_2) || (*(int *)(iVar1 + 0xc) == param_3)) goto LAB_02124f9c;
    goto LAB_02124e88;
  }
  uVar6 = 8;
LAB_02124f9c:
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_021252c4 + 0x2124fb4)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_02124ffc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021252c4 + 0x2124fb4),0);
LAB_02124ffc:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  if ((uVar6 | 8) == 8) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dd0c38(iVar1,param_3,0);
    iVar5 = func_0x0216224c(0);
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x4c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar5 + 0x2e) != '\0') {
        if (iVar1 != 0) {
LAB_021250e0:
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          return *(undefined4 *)(iVar1 + 0x310);
        }
        iVar5 = FUN_02123058(param_1);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x3c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0364bc1c(iVar5,param_2,**(undefined4 **)(_UNK_021252c8 + 0x21250cc));
        if (iVar5 != 0) goto LAB_021250e0;
      }
    }
    iVar5 = FUN_02123058(param_1);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar5 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0345efbc(iVar1,param_2,&uStack_28,**(undefined4 **)(_UNK_021252d0 + 0x21251b4));
      return uStack_28;
    }
    if (*(char *)(iVar5 + 0x33) != '\0') {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return *(undefined4 *)(iVar1 + 0x378);
    }
  }
  return 0;
}



// ===== FAT.Merge.ItemClickSourceComponent$$CalculateSpeedOutputCost RVA 0x21152d4 =====

void FUN_021252d4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb39b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb39b,0);
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
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  FUN_02122cc0(param_1);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$StartInstantOutput RVA 0x211532c =====

void FUN_0212532c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9e83,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$SpeedOutput RVA 0x2115390 =====

undefined4 FUN_02125390(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb39c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb39c,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_02122cc0(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(int *)(iVar1 + 0x44) * 1000 - *(int *)(param_1 + 0x5c);
    func_0x0212542c(param_1,uVar2 & ~((int)uVar2 >> 0x1f));
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.ItemClickSourceComponent$$CalculateSpeedReviveCost RVA 0x21154ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021254ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_02125718 + 0x21254c4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212571c + 0x21254d8));
    func_0x01384978(*(undefined4 *)(_UNK_02125720 + 0x21254e4));
    *pcVar8 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb39d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar3 = (undefined *)FUN_0210e2d4(iVar1,0);
    if (puVar3 == &UNK_00b71e00) {
      piVar4 = (int *)func_0x021566f4(0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02125724 + 0x2125594)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x1c8);
            goto LAB_021255dc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02125724 + 0x2125594),0x21);
LAB_021255dc:
      iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_02122da4(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0(0);
      }
      iVar1 = *(int *)(iVar1 + 0x58);
      if (*(char *)(param_1 + 0x6c) != '\0') {
        iVar9 = *(int *)(param_1 + 0x4c);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar9 + 0x28)) {
          iVar1 = *(int *)(param_1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x28);
        }
      }
      iVar1 = iVar1 * 1000;
      uVar6 = iVar1 - *(int *)(param_1 + 0x60);
      iVar9 = FUN_02123058(param_1);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
      if ((*(undefined **)(iVar9 + 0x10) != &UNK_00b7214e) ||
         (iVar9 = func_0x0212572c(param_1,uVar6,iVar1,&uStack_1c), uVar2 = uStack_1c, iVar9 == 0)) {
        iVar9 = *(int *)(param_1 + 0x4c);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar2 = *(undefined4 *)(iVar9 + 0x60);
        if (*(int *)(**(int **)(_UNK_02125728 + 0x21256e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = func_0x028d41ac(0,uVar2,uVar6,iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb39d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemClickSourceComponent$$CalculateReviveCostBingo RVA 0x211572c =====

undefined4
FUN_0212572c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0xb39e,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0xb39e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02284200(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemClickSourceComponent$$SpeedRevive RVA 0x21157a8 =====

undefined4 FUN_021257a8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb39f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb39f,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_02122da4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_02122e38(param_1);
    uVar2 = iVar1 - *(int *)(param_1 + 0x60);
    FUN_0212542c(param_1,uVar2 & ~((int)uVar2 >> 0x1f));
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1,0);
    uVar4 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,uVar4,0,0);
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnInitOutputSet RVA 0x2115884 =====

/* WARNING: Removing unreachable block (ram,0x021684b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02125884(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0xb3a0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar8,0,0);
    return;
  }
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = FUN_0210e2d4(iVar1,0);
  pcVar10 = (char *)(_UNK_0216858c + 0x21680c0);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02168590 + 0x21680d4),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_02168594 + 0x21680e0));
    func_0x01384978(*(undefined4 *)(_UNK_02168598 + 0x21680ec));
    func_0x01384978(*(undefined4 *)(_UNK_0216859c + 0x21680f8));
    func_0x01384978(*(undefined4 *)(_UNK_021685a0 + 0x2168104));
    func_0x01384978(*(undefined4 *)(_UNK_021685a4 + 0x2168110));
    func_0x01384978(*(undefined4 *)(_UNK_021685a8 + 0x216811c));
    func_0x01384978(*(undefined4 *)(_UNK_021685ac + 0x2168128));
    func_0x01384978(*(undefined4 *)(_UNK_021685b0 + 0x2168134));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2ebe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ebe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,uVar11,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar8,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar12 = *(int **)(_UNK_021685b4 + 0x21681ac);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar12;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
        goto LAB_021681f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,10);
LAB_021681f4:
  piVar6 = (int *)(*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
  iVar1 = 0;
  if (piVar6 != (int *)0x0) {
    iVar1 = piVar6[8];
    piVar2 = piVar6;
  }
  if (piVar6 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  piVar6 = (int *)func_0x021566f4();
  iVar1 = piVar2[8];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_021685b8 + 0x216825c));
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  iVar9 = *piVar12;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0x1e0);
        goto LAB_021682c4;
      }
      uVar5 = uVar5 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar9,0x24);
LAB_021682c4:
  iVar1 = (*(code *)*puVar3)(piVar6,uVar11,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_021685bc + 0x2168304));
  piVar12 = *(int **)(_UNK_021685c0 + 0x2168320);
  piVar6 = *(int **)(_UNK_021685c4 + 0x2168328);
  puVar3 = *(undefined4 **)(_UNK_021685c8 + 0x2168330);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_02168388;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_02168388:
    iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar6) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_021683fc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar6,0);
LAB_021683fc:
    (*(code *)*puVar4)(&uStack_30,piVar2,puVar4[1]);
    uVar8 = uStack_2c;
    uVar11 = uStack_30;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(param_2,uVar11,uVar8,*puVar3);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_021685cc + 0x2168458)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_021684a0;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021685cc + 0x2168458),0);
LAB_021684a0:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnInitRandomList RVA 0x211590c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212590c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_02125c28 + 0x2125928);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02125c2c + 0x212593c));
    func_0x01384978(*(undefined4 *)(_UNK_02125c30 + 0x2125948));
    func_0x01384978(*(undefined4 *)(_UNK_02125c34 + 0x2125954));
    func_0x01384978(*(undefined4 *)(_UNK_02125c38 + 0x2125960));
    func_0x01384978(*(undefined4 *)(_UNK_02125c3c + 0x212596c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_2c = param_2;
  uVar11 = FUN_0210e2d4(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02125c40 + 0x2125a14)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02125a5c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02125c40 + 0x2125a14),10);
LAB_02125a5c:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x20);
    param_2 = iVar1;
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    iVar1 = 0;
    iVar10 = 1;
    puVar3 = *(undefined4 **)(_UNK_02125c44 + 0x2125aa0);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = piVar2[0x12];
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar1) break;
      iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02125c48 + 0x2125ad0));
      func_0x0214337c(iVar8,0);
      iVar9 = *(int *)(param_2 + 0x20);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x48);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iStack_28 = iVar1;
      uVar11 = func_0x0364c9b8(iVar9,iVar1,*puVar3);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_2 + 0x20);
      *(undefined4 *)(iVar8 + 8) = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar1,iVar10 + -1,*puVar3);
      iVar1 = iStack_2c;
      iVar9 = *(int *)(param_2 + 0x20);
      *(undefined4 *)(iVar8 + 0xc) = uVar11;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x4c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar9,iVar10,*puVar3);
      *(undefined4 *)(iVar8 + 0x10) = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      piVar2 = *(int **)(_UNK_02125c4c + 0x2125bc8);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar12 = *piVar2;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(int *)(iVar9 + uVar4 * 4 + 0x10) = iVar8;
      }
      else {
        func_0x0328f170(iVar1,iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
      piVar2 = *(int **)(param_2 + 0x20);
      iVar10 = iVar10 + 2;
      iVar1 = iStack_28 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnPostMerge RVA 0x2115c50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02125c50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02125e78 + 0x2125c70);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02125e7c + 0x2125c84));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb3a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0x28)) goto LAB_02125e60;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = 0;
    iVar1 = FUN_02116a38(0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02125d44;
    }
  }
  else {
    iVar5 = 0;
    iVar1 = FUN_02116a38(param_2,0);
    if (iVar1 == 0) {
LAB_02125d44:
      iVar4 = func_0x02feb690(param_2,&iStack_24,1,**(undefined4 **)(_UNK_02125e80 + 0x2125d58));
      iVar1 = iStack_24;
      iVar5 = 0;
      if (iVar4 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_02122f9c(iVar1);
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 0x58) + iVar5;
      }
    }
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar4 = 0;
    iVar1 = FUN_02116a38(0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02125de4;
    }
  }
  else {
    iVar4 = 0;
    iVar1 = FUN_02116a38(param_3,0);
    if (iVar1 == 0) {
LAB_02125de4:
      iVar2 = func_0x02feb690(param_3,&iStack_24,1,**(undefined4 **)(_UNK_02125e84 + 0x2125df8));
      iVar1 = iStack_24;
      iVar4 = 0;
      if (iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_02122f9c(iVar1);
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0x58) + iVar4;
      }
    }
  }
  if (*(int *)(param_1 + 0x54) < iVar4 + iVar5) {
    *(int *)(param_1 + 0x54) = iVar4 + iVar5;
  }
  func_0x02125e88(param_1,param_2,param_3);
LAB_02125e60:
  func_0x02125ffc(param_1,param_2,param_3);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$TryAddBoostCount RVA 0x2115e88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02125e88(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02125ff0 + 0x2125ea8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02125ff4 + 0x2125ebc));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0xb3a3,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(_UNK_02125ff8 + 0x2125f44);
    iVar1 = func_0x02feb690(param_2,&iStack_1c,0,*puVar4);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02feb690(param_3,&iStack_20,0,*puVar4);
      if (iVar1 != 0) {
        if ((iStack_1c != 0) && (iVar2 = FUN_02122d24(), iVar1 = iStack_1c, iVar2 != 0)) {
          iVar2 = *(int *)(param_1 + 0x70);
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          *(int *)(param_1 + 0x70) = *(int *)(iVar1 + 0x70) + iVar2;
        }
        if ((iStack_20 != 0) && (iVar2 = FUN_02122d24(), iVar1 = iStack_20, iVar2 != 0)) {
          iVar2 = *(int *)(param_1 + 0x70);
          if (iStack_20 == 0) {
            func_0x01384bf0();
          }
          *(int *)(param_1 + 0x70) = *(int *)(iVar1 + 0x70) + iVar2;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnPostAttach RVA 0x2116064 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02126064(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_021262c8 + 0x2126078);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021262cc + 0x212608c));
    func_0x01384978(*(undefined4 *)(_UNK_021262d0 + 0x2126098));
    func_0x01384978(*(undefined4 *)(_UNK_021262d4 + 0x21260a4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    return;
  }
  func_0x021262e0(param_1);
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = FUN_0210e2d4(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar11 = *(int **)(_UNK_021262d8 + 0x2126148);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar11;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
        goto LAB_02126190;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,10);
LAB_02126190:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar10,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x18);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar9 + 0xc)) {
    piVar2 = (int *)func_0x021566f4(0);
    iVar9 = *(int *)(iVar1 + 0x18);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0364c9b8(iVar9,0,**(undefined4 **)(_UNK_021262dc + 0x2126210));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar2;
    iVar4 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x1e0);
          goto LAB_02126278;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x24);
LAB_02126278:
    uVar10 = (*(code *)*puVar3)(piVar2,uVar10,puVar3[1]);
    *(undefined4 *)(param_1 + 0x74) = uVar10;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar10 = 0;
  if (iVar9 < 1) {
    uVar10 = *(undefined4 *)(iVar1 + 0x54);
  }
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x54) = uVar10;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnUpdateInactive RVA 0x2116560 =====

/* WARNING: Possible PIC construction at 0x021267dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021267e0) */
/* WARNING: Removing unreachable block (ram,0x021267f0) */
/* WARNING: Removing unreachable block (ram,0x021267f4) */
/* WARNING: Removing unreachable block (ram,0x02126810) */
/* WARNING: Removing unreachable block (ram,0x02126814) */
/* WARNING: Removing unreachable block (ram,0x02126820) */
/* WARNING: Removing unreachable block (ram,0x02126824) */
/* WARNING: Removing unreachable block (ram,0x02126838) */
/* WARNING: Removing unreachable block (ram,0x0212683c) */
/* WARNING: Removing unreachable block (ram,0x0212684c) */
/* WARNING: Removing unreachable block (ram,0x02126850) */

void FUN_02126560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = func_0x0229f06c(0xb3a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021773c4;
  }
  func_0x021265dc(param_1,param_2);
  func_0x02126630(param_1,param_2);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  iVar1 = func_0x0229f06c(0xb3a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a7,0);
    unaff_r4 = iStack_20;
    unaff_r5 = iStack_1c;
    unaff_r6 = iStack_18;
    if (iVar1 == 0) {
      func_0x01384bf0();
      unaff_r4 = iStack_20;
      unaff_r5 = iStack_1c;
      unaff_r6 = iStack_18;
    }
    goto SUB_021773c4;
  }
  iVar1 = FUN_02122da4(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_021230ac(param_1), iVar1 == 0)) {
LAB_0212689c:
    iVar2 = param_2;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    iVar1 = FUN_02122e38(param_1);
    if (param_2 < iVar1 - *(int *)(param_1 + 0x60)) {
LAB_02126884:
      iVar1 = FUN_02122da4(param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_2;
      }
      goto LAB_0212689c;
    }
    iVar1 = FUN_02122ee0(param_1);
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x34) <= iVar1) goto LAB_02126884;
    iVar2 = FUN_02122e38(param_1);
    unaff_r9 = iVar2 - *(int *)(param_1 + 0x60);
    unaff_lr = 0x21267e0;
    iVar2 = unaff_r9;
    iStack_20 = iVar3;
    iStack_1c = param_1;
    iStack_18 = iVar1;
    unaff_r8 = 0;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = iStack_18;
  *(int *)((int)register0x00000054 + -0x14) = iStack_1c;
  *(int *)((int)register0x00000054 + -0x18) = iStack_20;
  iVar1 = func_0x0229f06c(0xb3a8,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02122cc0(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x44) < 1) {
        iVar1 = *(int *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x44) * 1000;
        iVar2 = *(int *)(param_1 + 0x5c) + iVar2;
        *(int *)(param_1 + 0x5c) = iVar2;
        if (iVar1 <= iVar2) {
          iVar3 = func_0x01457ae8(iVar2,iVar1);
          iVar6 = *(int *)(param_1 + 0x4c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar2 = *(int *)(param_1 + 0x5c);
          }
          iVar3 = *(int *)(iVar6 + 0x40) * iVar3;
          func_0x01458344(iVar2,iVar1);
          iVar1 = *(int *)(param_1 + 0x58);
          uVar5 = extraout_r1;
          if (iVar1 <= iVar3) {
            uVar5 = 0;
            iVar3 = iVar1;
          }
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
          *(int *)(param_1 + 0x58) = iVar1 - iVar3;
          *(undefined4 *)(param_1 + 0x5c) = uVar5;
          return;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb3a8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
  unaff_r5 = *(int *)((int)register0x00000054 + -0x14);
  unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r7 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r8 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_2 = iVar2;
SUB_021773c4:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$_UpdateNoCD RVA 0x2116630 =====

void FUN_02126630(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb3a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_02122810(param_1);
  if (iVar1 != 0) {
    param_2 = *(int *)(param_1 + 100) - param_2;
    *(int *)(param_1 + 100) = param_2;
    if (0 < param_2) {
      return;
    }
    *(undefined4 *)(param_1 + 100) = 0;
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1,0);
    uVar4 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x25f,0,4,0);
    if (iVar3 == 0) {
      iVar1 = *(int *)(iVar1 + 0x28);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02148f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),uVar4,4,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x25f,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02180430(iVar3,iVar1,uVar4,4);
    }
    return;
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$_UpdateRecharge RVA 0x211670c =====

/* WARNING: Possible PIC construction at 0x021267dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021267e0) */
/* WARNING: Removing unreachable block (ram,0x021267f0) */
/* WARNING: Removing unreachable block (ram,0x021267f4) */
/* WARNING: Removing unreachable block (ram,0x02126810) */
/* WARNING: Removing unreachable block (ram,0x02126814) */
/* WARNING: Removing unreachable block (ram,0x02126820) */
/* WARNING: Removing unreachable block (ram,0x02126824) */
/* WARNING: Removing unreachable block (ram,0x02126838) */
/* WARNING: Removing unreachable block (ram,0x0212683c) */
/* WARNING: Removing unreachable block (ram,0x0212684c) */
/* WARNING: Removing unreachable block (ram,0x02126850) */

void FUN_0212670c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  undefined4 unaff_r7;
  int iVar6;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  
  iVar1 = func_0x0229f06c(0xb3a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021773c4;
  }
  iVar1 = FUN_02122da4(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_021230ac(param_1), iVar1 == 0)) {
LAB_0212689c:
    iVar2 = param_2;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    iVar1 = FUN_02122e38(param_1);
    if (param_2 < iVar1 - *(int *)(param_1 + 0x60)) {
LAB_02126884:
      iVar1 = FUN_02122da4(param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_2;
      }
      goto LAB_0212689c;
    }
    iVar1 = FUN_02122ee0(param_1);
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x34) <= iVar1) goto LAB_02126884;
    iVar2 = FUN_02122e38(param_1);
    unaff_r9 = iVar2 - *(int *)(param_1 + 0x60);
    unaff_lr = 0x21267e0;
    iVar2 = unaff_r9;
    unaff_r4 = iVar3;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    unaff_r8 = 0;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  iVar1 = func_0x0229f06c(0xb3a8,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02122cc0(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x44) < 1) {
        iVar1 = *(int *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x44) * 1000;
        iVar2 = *(int *)(param_1 + 0x5c) + iVar2;
        *(int *)(param_1 + 0x5c) = iVar2;
        if (iVar1 <= iVar2) {
          iVar3 = func_0x01457ae8(iVar2,iVar1);
          iVar6 = *(int *)(param_1 + 0x4c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar2 = *(int *)(param_1 + 0x5c);
          }
          iVar3 = *(int *)(iVar6 + 0x40) * iVar3;
          func_0x01458344(iVar2,iVar1);
          iVar1 = *(int *)(param_1 + 0x58);
          uVar5 = extraout_r1;
          if (iVar1 <= iVar3) {
            uVar5 = 0;
            iVar3 = iVar1;
          }
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
          *(int *)(param_1 + 0x58) = iVar1 - iVar3;
          *(undefined4 *)(param_1 + 0x5c) = uVar5;
          return;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb3a8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
  unaff_r5 = *(int *)((int)register0x00000054 + -0x14);
  unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r7 = *(undefined4 *)((int)register0x00000054 + -0xc);
  unaff_r8 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  param_2 = iVar2;
SUB_021773c4:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$OnUpdate RVA 0x21168b8 =====

/* WARNING: Possible PIC construction at 0x021267dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021267e0) */
/* WARNING: Removing unreachable block (ram,0x021267f0) */
/* WARNING: Removing unreachable block (ram,0x021267f4) */
/* WARNING: Removing unreachable block (ram,0x02126810) */
/* WARNING: Removing unreachable block (ram,0x02126814) */
/* WARNING: Removing unreachable block (ram,0x02126820) */
/* WARNING: Removing unreachable block (ram,0x02126824) */
/* WARNING: Removing unreachable block (ram,0x02126838) */
/* WARNING: Removing unreachable block (ram,0x0212683c) */
/* WARNING: Removing unreachable block (ram,0x0212684c) */
/* WARNING: Removing unreachable block (ram,0x02126850) */

void FUN_021268b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = func_0x0229f06c(0xb3a9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3a9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021773c4;
  }
  iVar2 = func_0x02126964(param_1);
  if (iVar2 != 0) {
    return;
  }
  func_0x02126b58(param_1,param_2);
  param_2 = func_0x021621f0(param_1,param_2,0);
  FUN_02126630(param_1,param_2);
  func_0x02126bac(param_1,param_2);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  iVar2 = func_0x0229f06c(0xb3a7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3a7,0);
    unaff_r4 = iStack_20;
    unaff_r5 = iStack_1c;
    unaff_r6 = iStack_18;
    if (iVar2 == 0) {
      func_0x01384bf0();
      unaff_r4 = iStack_20;
      unaff_r5 = iStack_1c;
      unaff_r6 = iStack_18;
    }
    goto SUB_021773c4;
  }
  iVar2 = FUN_02122da4(param_1);
  if ((iVar2 == 0) || (iVar2 = FUN_021230ac(param_1), iVar2 == 0)) {
LAB_0212689c:
    iVar1 = param_2;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    iVar2 = FUN_02122e38(param_1);
    if (param_2 < iVar2 - *(int *)(param_1 + 0x60)) {
LAB_02126884:
      iVar2 = FUN_02122da4(param_1);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_2;
      }
      goto LAB_0212689c;
    }
    iVar2 = FUN_02122ee0(param_1);
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x34) <= iVar2) goto LAB_02126884;
    iVar1 = FUN_02122e38(param_1);
    unaff_r9 = iVar1 - *(int *)(param_1 + 0x60);
    unaff_lr = 0x21267e0;
    iVar1 = unaff_r9;
    iStack_20 = iVar3;
    iStack_1c = param_1;
    iStack_18 = iVar2;
    unaff_r8 = 0;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = iStack_18;
  *(int *)((int)register0x00000054 + -0x14) = iStack_1c;
  *(int *)((int)register0x00000054 + -0x18) = iStack_20;
  iVar2 = func_0x0229f06c(0xb3a8,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02122cc0(param_1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x44) < 1) {
        iVar2 = *(int *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x44) * 1000;
        iVar1 = *(int *)(param_1 + 0x5c) + iVar1;
        *(int *)(param_1 + 0x5c) = iVar1;
        if (iVar2 <= iVar1) {
          iVar3 = func_0x01457ae8(iVar1,iVar2);
          iVar6 = *(int *)(param_1 + 0x4c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar1 = *(int *)(param_1 + 0x5c);
          }
          iVar3 = *(int *)(iVar6 + 0x40) * iVar3;
          func_0x01458344(iVar1,iVar2);
          iVar2 = *(int *)(param_1 + 0x58);
          uVar5 = extraout_r1;
          if (iVar2 <= iVar3) {
            uVar5 = 0;
            iVar3 = iVar2;
          }
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
          *(int *)(param_1 + 0x58) = iVar2 - iVar3;
          *(undefined4 *)(param_1 + 0x5c) = uVar5;
          return;
        }
      }
    }
    return;
  }
  iVar2 = func_0x0229f13c(0xb3a8,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
  unaff_r5 = *(int *)((int)register0x00000054 + -0x14);
  unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r7 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r8 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_2 = iVar1;
SUB_021773c4:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$_UpdateJumpCD RVA 0x2116bac =====

void FUN_02126bac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0xb3aa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x31) != '\0') {
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210cd28(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020d83c8(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0214197c(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139a28(iVar1,0);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 < *(int *)(iVar3 + 0x34)) {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x34);
      }
    }
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$_TickRecharge RVA 0x2116ce4 =====

void FUN_02126ce4(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  iVar1 = func_0x0229f06c(0xb3a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_02122cc0(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x44) < 1) {
      iVar1 = *(int *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x44) * 1000;
      param_2 = *(int *)(param_1 + 0x5c) + param_2;
      *(int *)(param_1 + 0x5c) = param_2;
      if (iVar1 <= param_2) {
        iVar3 = func_0x01457ae8(param_2,iVar1);
        iVar5 = *(int *)(param_1 + 0x4c);
        if (iVar5 == 0) {
          func_0x01384bf0();
          param_2 = *(int *)(param_1 + 0x5c);
        }
        iVar3 = *(int *)(iVar5 + 0x40) * iVar3;
        func_0x01458344(param_2,iVar1);
        iVar1 = *(int *)(param_1 + 0x58);
        uVar4 = extraout_r1;
        if (iVar1 <= iVar3) {
          uVar4 = 0;
          iVar3 = iVar1;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
        *(int *)(param_1 + 0x58) = iVar1 - iVar3;
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        return;
      }
    }
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$ResetEnergyMultiplier RVA 0x2116e14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02126e14(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9df9,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
    pcVar3 = (char *)(_UNK_02126f40 + 0x2126e98);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02126f44 + 0x2126eac));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9de4,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar4 < 1) {
        return;
      }
      (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x9de4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9df9,0);
    if (iVar1 == 0) {
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
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$PreCalculateSmartEnergy RVA 0x2116f48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02126f48(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined1 uStack_21;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_021270f4 + 0x2126f60);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021270f8 + 0x2126f74));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  uStack_20 = 0;
  uStack_21 = 0;
  iVar1 = func_0x0229f06c(0x9df8,0);
  if (iVar1 == 0) {
    FUN_02126e14(param_1);
    iVar1 = FUN_02124444(param_1,&iStack_1c,1);
    iVar7 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x44) = iVar1;
    *(int *)(param_1 + 0x48) = iStack_1c;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar7 + 0x2e) != '\0') {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_021270fc + 0x212703c)) {
            puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0x178);
            goto LAB_02127084;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021270fc + 0x212703c),0x17);
LAB_02127084:
      iVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if ((((0 < iVar1) && (iVar7 != 0)) && (iStack_1c - 5U < 2)) &&
         (iVar7 = func_0x0215c4c8(0xffffffff,0), 0 < iVar7)) {
        func_0x021635b4(iVar1,iVar7,&uStack_20,&uStack_21,0);
        *(undefined4 *)(param_1 + 0x3c) = uStack_20;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9df8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$.ctor RVA 0x2117100 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02127100(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  pcVar3 = (char *)(_UNK_02127260 + 0x2127120);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02127264 + 0x2127134));
    func_0x01384978(*(undefined4 *)(_UNK_02127268 + 0x2127140));
    func_0x01384978(*(undefined4 *)(_UNK_0212726c + 0x212714c));
    func_0x01384978(*(undefined4 *)(_UNK_02127270 + 0x2127158));
    func_0x01384978(*(undefined4 *)(_UNK_02127274 + 0x2127164));
    func_0x01384978(*(undefined4 *)(_UNK_02127278 + 0x2127170));
    func_0x01384978(*(undefined4 *)(_UNK_0212727c + 0x212717c));
    func_0x01384978(*(undefined4 *)(_UNK_02127280 + 0x2127188));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02127284 + 0x212719c));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02127288 + 0x21271b0));
  puVar2 = *(undefined4 **)(_UNK_0212728c + 0x21271c4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02127290 + 0x21271dc));
  puVar2 = *(undefined4 **)(_UNK_02127294 + 0x21271f0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02127298 + 0x2127208));
  puVar2 = *(undefined4 **)(_UNK_0212729c + 0x212721c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_021272a0 + 0x2127234));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnSerialize RVA 0x21172a4 =====

void thunk_FUN_02123514(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5c7d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c7d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x21172a8 =====

void thunk_FUN_021237d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5c62,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c62,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnInitRandomList RVA 0x21172ac =====

void thunk_FUN_021272b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0xb364,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb364,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnPostMerge RVA 0x2117304 =====

void thunk_FUN_02125ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ea5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x2117308 =====

/* WARNING: Possible PIC construction at 0x02135cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02135cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_021262e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_r4;
  char *pcVar8;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  int *piVar10;
  undefined4 unaff_r8;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  pcVar8 = (char *)(_UNK_02126554 + 0x21262f4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02126558 + 0x2126308));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb362,0);
  if (iVar1 == 0) {
    func_0x02127894(param_1);
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar10 = *(int **)(_UNK_0212655c + 0x21263ac);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x128);
          goto LAB_021263f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xd);
LAB_021263f4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    param_1[7] = iVar1;
    param_1[8] = 0;
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
          goto LAB_021264a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xb);
LAB_021264a4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      uVar9 = *(undefined4 *)(iVar1 + 0x10);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x120);
            goto LAB_02126530;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xc);
LAB_02126530:
      iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
      param_1[8] = iVar1;
    }
    pcVar8 = (char *)(_UNK_02136170 + 0x2135bfc);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02136174 + 0x2135c10));
      func_0x01384978(*(undefined4 *)(_UNK_02136178 + 0x2135c1c));
      func_0x01384978(*(undefined4 *)(_UNK_0213617c + 0x2135c28));
      func_0x01384978(*(undefined4 *)(_UNK_02136180 + 0x2135c34));
      func_0x01384978(*(undefined4 *)(_UNK_02136184 + 0x2135c40));
      func_0x01384978(*(undefined4 *)(_UNK_02136188 + 0x2135c4c));
      func_0x01384978(*(undefined4 *)(_UNK_0213618c + 0x2135c58));
      func_0x01384978(*(undefined4 *)(_UNK_02136190 + 0x2135c64));
      func_0x01384978(*(undefined4 *)(_UNK_02136194 + 0x2135c70));
      func_0x01384978(*(undefined4 *)(_UNK_02136198 + 0x2135c7c));
      func_0x01384978(*(undefined4 *)(_UNK_0213619c + 0x2135c88));
      func_0x01384978(*(undefined4 *)(_UNK_021361a0 + 0x2135c94));
      *pcVar8 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_28[0] = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    iVar1 = func_0x0229f06c(0xb363,0);
    if (iVar1 == 0) {
      iVar1 = param_1[4];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021361a4 + 0x2135d18));
      (**(code **)(*param_1 + 0x140))(param_1,param_1[4],*(undefined4 *)(*param_1 + 0x144));
      uVar9 = func_0x02450044(param_1,0);
      uVar7 = **(undefined4 **)(_UNK_021361ac + 0x2135d60);
      if (*(int *)(**(int **)(_UNK_021361a8 + 0x2135d54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x0244ff60(uVar7,0);
      iVar1 = func_0x02450a48(uVar9,uVar7,0);
      if (iVar1 != 0) {
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02116f08(iVar1,0);
        iVar4 = FUN_02123568(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar9 = FUN_0210e2d4(iVar4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02142c70(iVar1,uVar9,2,0);
        param_1[0xc] = iVar1;
      }
      piVar2 = *(int **)(_UNK_021361b0 + 0x2135e14);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_50,iVar1,aiStack_28,**(undefined4 **)(_UNK_021361b4 + 0x2135e54));
      uStack_2c = uStack_4c;
      uStack_30 = uStack_50;
      (**(code **)(*param_1 + 0x160))(param_1,aiStack_28[0],*(undefined4 *)(*param_1 + 0x164));
      iVar1 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_021361b8 + 0x2135ea8));
        func_0x02143214(iVar4,**(undefined4 **)(_UNK_021361bc + 0x2135ebc),0);
        iVar1 = aiStack_28[0];
        param_1[0xb] = iVar4;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02143384(iVar4,iVar1,0);
      }
      func_0x028c98a0(&uStack_30,0);
      (**(code **)(*param_1 + 0x148))(param_1,param_1[5],*(undefined4 *)(*param_1 + 0x14c));
      iVar1 = param_1[10];
      param_1[6] = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar11 = *(undefined4 **)(_UNK_021361c0 + 0x2135f3c);
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      puVar3 = *(undefined4 **)(_UNK_021361c4 + 0x2135f58);
      while (iVar4 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 = iStack_34, iVar4 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361c8 + 0x2135f8c));
      iVar1 = param_1[10];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      while (iVar1 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 != 0) {
        func_0x021361e0(param_1,iStack_34);
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361d4 + 0x2135fec));
      return;
    }
    iVar1 = func_0x0229f13c(0xb363,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2135cf8;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_50;
  }
  else {
    iVar1 = func_0x0229f13c(0xb362,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnUpdateInactive RVA 0x211730c =====

void thunk_FUN_021265dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5e5e,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e5e,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.Merge.ItemClickSourceComponent$$<>iFixBaseProxy_OnUpdate RVA 0x2117310 =====

void thunk_FUN_02126b58(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5e59,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e59,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}


