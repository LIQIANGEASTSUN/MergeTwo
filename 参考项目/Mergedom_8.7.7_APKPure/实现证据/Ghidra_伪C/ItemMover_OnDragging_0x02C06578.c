
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_ItemMover_OnDragging_0x02C06578
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_063f0f18;
  if ((bRam0000000006812ba8 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam0000000006812ba8 = 1;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar2 = func_0x05c4a644(uVar7,0);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_4 + 0x50) = 0;
    func_0x02ad6d8c((undefined8 *)(param_4 + 0x50),0);
    *(undefined2 *)(param_4 + 0x39) = 0;
    return;
  }
  func_0x05ca1df0(0);
  if (*(long *)(param_4 + 0x18) != 0) {
    fVar9 = (float)func_0x02ca44f8(*(long *)(param_4 + 0x18),0);
    puVar1 = PTR_DAT_063f9ed8;
    plVar8 = *(long **)(param_4 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      fVar14 = param_2;
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_063f9ed8) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_02d06680;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x02b0e364(plVar8,*(long *)PTR_DAT_063f9ed8,5);
LAB_02d06680:
      fVar10 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
      plVar8 = *(long **)(param_4 + 0x10);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 6) * 0x10 + 0x138);
              goto LAB_02d066e8;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)func_0x02b0e364(plVar8,*(long *)puVar1,6);
LAB_02d066e8:
        fVar11 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
        if (fVar9 <= fVar11) {
          fVar11 = fVar9;
        }
        if (fVar10 <= fVar9) {
          fVar10 = fVar11;
        }
        if (fVar14 <= param_2) {
          param_2 = fVar14;
        }
        if ((*(long *)(param_4 + 0x58) != 0) &&
           (lVar5 = func_0x05c3f95c(*(long *)(param_4 + 0x58),0), lVar5 != 0)) {
          uStack_4c = func_0x05c54030(lVar5,0);
          uStack_50 = 0;
          fStack_58 = fVar10;
          fStack_54 = param_2;
          fStack_48 = fVar14;
          uStack_44 = param_3;
          uVar12 = func_0x05c50518(0);
          uVar4 = 0x7f800000;
          uVar13 = func_0x05c30a6c(_UNK_0118378c,0x7f800000,uVar12,&uStack_4c,&fStack_58,
                                   param_4 + 0x70,0);
          if ((*(long *)(param_4 + 0x58) != 0) &&
             (lVar5 = func_0x05c3f95c(*(long *)(param_4 + 0x58),0), lVar5 != 0)) {
            func_0x05c5410c(uVar13,uVar4,uVar12,lVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

