
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfe6f8(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar2 = (char *)(_UNK_02bfeb84 + 0x2bfe714);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfeb88 + 0x2bfe728));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeb8c + 0x2bfe734));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeb90 + 0x2bfe740));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeb94 + 0x2bfe74c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeb98 + 0x2bfe758));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeb9c + 0x2bfe764));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeba0 + 0x2bfe770));
    func_0x01438628(*(undefined4 *)(_UNK_02bfeba4 + 0x2bfe77c));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5d4e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d4e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
    return;
  }
  if (((*(uint *)(param_1 + 0xb0) != param_2) && (iVar1 = func_0x02c02afc(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x02c02afc(param_1,param_2), iVar1 != 0)) {
    piVar6 = *(int **)(_UNK_02bfeba8 + 0x2bfe814);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02bfebac + 0x2bfe830);
    iVar1 = func_0x014e9518(*puVar8);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bad168(iVar1,param_2,uVar3,0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar8);
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bad168(iVar1,uVar3,uVar7,0);
      if (iVar1 == 0) {
        piVar6 = *(int **)(_UNK_02bfebb0 + 0x2bfe8c0);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar8 = *(undefined4 **)(_UNK_02bfebb4 + 0x2bfe8dc);
        iVar1 = func_0x014e9518(*puVar8);
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
        uVar3 = func_0x02c3f4b4(iVar5,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c4b5ec(iVar1,uVar3,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar8);
          iVar5 = *(int *)(param_1 + 0x44);
          uVar4 = *(uint *)(param_1 + 0xb0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar5 + 0xc) <= uVar4) {
            func_0x014388e8();
          }
          iVar5 = *(int *)(iVar5 + uVar4 * 4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x02c3f4b4(iVar5,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02c4c780(iVar1,uVar3,0);
          if (iVar1 == 0) {
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(*puVar8);
            iVar5 = *(int *)(param_1 + 0x44);
            uVar4 = *(uint *)(param_1 + 0xb0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= uVar4) {
              func_0x014388e8();
            }
            iVar5 = *(int *)(iVar5 + uVar4 * 4 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar3 = func_0x02c3f4b4(iVar5,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02c4c570(iVar1,uVar3,0);
            if (iVar1 == 0) goto LAB_02bfeae8;
          }
        }
        if (*(int *)(param_1 + 0xdc) != 0) {
          func_0x0152da0c(&uStack_30,*(int *)(param_1 + 0xdc),
                          **(undefined4 **)(_UNK_02bfebb8 + 0x2bfea80));
          puVar8 = *(undefined4 **)(_UNK_02bfebbc + 0x2bfea94);
          do {
            iVar5 = func_0x04878f14(&uStack_30,*puVar8);
            iVar1 = iStack_24;
            if (iVar5 == 0) break;
            if (iStack_24 == 0) {
              func_0x014388e4();
            }
            iVar1 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
          } while (iVar1 == 0);
          func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02bfebc0 + 0x2bfeadc));
          return;
        }
      }
    }
  }
LAB_02bfeae8:
  func_0x02c02b84(param_1,param_2);
  return;
}

