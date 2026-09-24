// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemChargeableContainer.TryAddFill 0x110632C; ItemChargeableContainer.TryAddFill (candidate)
// Image base: 0x10000; Ghidra address: 0111632c; native size hint: 0x324


undefined4 ItemChargeableContainer_TryAddFill_0110632C(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  pcVar4 = (char *)(iRam01116634 + 0x1116344);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01116638 + 0x1116358));
    func_0x00f6b160(*(undefined4 *)(iRam0111663c + 0x1116364));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x011194d8(param_1,0);
  bVar8 = uVar1 == 0;
  if (bVar8) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar8 && uVar1 == 0) {
    iVar2 = func_0x01116650(param_1);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = 0;
    puVar7 = *(undefined4 **)(iRam01116640 + 0x11163b4);
    do {
      iVar6 = *(int *)(param_1 + 200);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar2) {
        return 0;
      }
      iVar6 = *(int *)(param_1 + 200);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      iVar6 = func_0x02c02900(iVar6,iVar2,*puVar7);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      iVar6 = func_0x02e96a10(*(undefined4 *)(iVar6 + 8),param_2,0);
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 200);
        if (iVar6 == 0) {
          func_0x00f6b3d0();
        }
        iVar6 = *(int *)(iVar6 + 8);
        if (iVar6 == 0) {
          func_0x00f6b3d0();
        }
        iVar6 = func_0x02c02900(iVar6,iVar2,*puVar7);
        if (iVar6 == 0) {
          func_0x00f6b3d0();
        }
        if (0 < *(int *)(iVar6 + 0xc)) {
          iVar6 = *(int *)(param_1 + 0x84);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          if (*(int *)(iVar6 + 0x4c) == 0xc) {
            iVar6 = *(int *)(param_1 + 0x84);
            if (iVar6 == 0) {
              func_0x00f6b3d0();
            }
            func_0x0132d4dc(param_2,*(undefined4 *)(iVar6 + 0x14),0);
          }
          iVar6 = *(int *)(param_1 + 200);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          iVar6 = *(int *)(iVar6 + 8);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          iVar2 = func_0x02c02900(iVar6,iVar2,*puVar7);
          if (iVar2 == 0) {
            func_0x00f6b3d0();
          }
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
          iVar6 = func_0x01116650(param_1);
          iVar2 = 0;
          if (iVar6 != 0) {
            iVar2 = *(int *)(param_1 + 200);
            if (iVar2 == 0) {
              func_0x00f6b3d0();
            }
            if (*(int *)(iVar2 + 0xc) == 0) {
              pcVar4 = (char *)(iRam01116644 + 0x11165f0);
              if (*pcVar4 == '\0') {
                func_0x00f6b160(*(undefined4 *)(iRam01116648 + 0x1116604));
                *pcVar4 = '\x01';
              }
              puVar7 = *(undefined4 **)(**(int **)(iRam0111664c + 0x1116618) + 0x5c);
              func_0x01116870(param_1,*puVar7,puVar7[1]);
              return 1;
            }
            func_0x01116738(param_1);
            func_0x011167b0(param_1);
            iVar2 = *(int *)(param_1 + 0xa4);
            uVar3 = *(undefined4 *)(param_1 + 0x34);
            if (iVar2 == 0) {
              func_0x00f6b3d0();
            }
            iVar2 = func_0x01111be8(iVar2,uVar3);
            if (iVar2 == 0) {
              iVar2 = func_0x01116138(param_1);
            }
          }
          func_0x01116a7c(iVar2,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 200));
          iVar6 = *(int *)(param_1 + 200);
          iVar2 = *(int *)(param_1 + 0xa0);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          uVar5 = *(undefined4 *)(iVar6 + 8);
          uVar3 = func_0x01116650(param_1);
          if (iVar2 == 0) {
            func_0x00f6b3d0();
          }
          func_0x01114b98(iVar2,uVar5,uVar3);
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while( true );
  }
  return 0;
}

