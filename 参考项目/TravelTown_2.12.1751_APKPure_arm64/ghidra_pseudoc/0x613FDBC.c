/* Ghidra 12.1.2 native pseudocode; RVA 0x613FDBC; MergeEngine.Model.Configuration.MergingConfigurationModel.AreItemsInSameGraph; status ok */


/* WARNING: Possible PIC construction at 0x06240154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06240158) */
/* WARNING: Removing unreachable block (ram,0x0624016c) */
/* WARNING: Removing unreachable block (ram,0x06240180) */
/* WARNING: Removing unreachable block (ram,0x0624019c) */
/* WARNING: Removing unreachable block (ram,0x062401a0) */
/* WARNING: Removing unreachable block (ram,0x062401bc) */
/* WARNING: Removing unreachable block (ram,0x062401c4) */
/* WARNING: Removing unreachable block (ram,0x062401ec) */
/* WARNING: Removing unreachable block (ram,0x062401d0) */
/* WARNING: Removing unreachable block (ram,0x062401dc) */
/* WARNING: Removing unreachable block (ram,0x062401fc) */
/* WARNING: Removing unreachable block (ram,0x0624020c) */
/* WARNING: Removing unreachable block (ram,0x0624024c) */
/* WARNING: Removing unreachable block (ram,0x06240298) */
/* WARNING: Removing unreachable block (ram,0x062402c0) */
/* WARNING: Removing unreachable block (ram,0x062402f8) */
/* WARNING: Removing unreachable block (ram,0x06240300) */
/* WARNING: Removing unreachable block (ram,0x06240310) */
/* WARNING: Removing unreachable block (ram,0x06240320) */
/* WARNING: Removing unreachable block (ram,0x06240328) */
/* WARNING: Removing unreachable block (ram,0x06240350) */
/* WARNING: Removing unreachable block (ram,0x06240334) */
/* WARNING: Removing unreachable block (ram,0x06240340) */
/* WARNING: Removing unreachable block (ram,0x0624035c) */
/* WARNING: Removing unreachable block (ram,0x0624036c) */
/* WARNING: Removing unreachable block (ram,0x06240388) */
/* WARNING: Removing unreachable block (ram,0x06240390) */
/* WARNING: Removing unreachable block (ram,0x062403b8) */
/* WARNING: Removing unreachable block (ram,0x0624039c) */
/* WARNING: Removing unreachable block (ram,0x062403a8) */
/* WARNING: Removing unreachable block (ram,0x062403c8) */
/* WARNING: Removing unreachable block (ram,0x062403d8) */
/* WARNING: Removing unreachable block (ram,0x06240404) */
/* WARNING: Removing unreachable block (ram,0x0624040c) */
/* WARNING: Removing unreachable block (ram,0x06240434) */
/* WARNING: Removing unreachable block (ram,0x06240418) */
/* WARNING: Removing unreachable block (ram,0x06240424) */
/* WARNING: Removing unreachable block (ram,0x06240444) */
/* WARNING: Removing unreachable block (ram,0x06240454) */
/* WARNING: Removing unreachable block (ram,0x06240484) */
/* WARNING: Removing unreachable block (ram,0x06240494) */
/* WARNING: Removing unreachable block (ram,0x062404a0) */
/* WARNING: Removing unreachable block (ram,0x062404d0) */
/* WARNING: Removing unreachable block (ram,0x062404c4) */
/* WARNING: Removing unreachable block (ram,0x062404e4) */
/* WARNING: Removing unreachable block (ram,0x06240554) */
/* WARNING: Removing unreachable block (ram,0x06240584) */
/* WARNING: Removing unreachable block (ram,0x062405a8) */
/* WARNING: Removing unreachable block (ram,0x062405c4) */
/* WARNING: Removing unreachable block (ram,0x06240600) */
/* WARNING: Removing unreachable block (ram,0x06240628) */
/* WARNING: Removing unreachable block (ram,0x06240664) */
/* WARNING: Removing unreachable block (ram,0x062406c8) */
/* WARNING: Removing unreachable block (ram,0x06240668) */
/* WARNING: Removing unreachable block (ram,0x062406a4) */

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__AreItemsInSameGraph
                (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((bRam0000000007e245bf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e245bf = 1;
  }
  puVar2 = PTR_DAT_07779820;
  if (param_2 != (long *)0x0) {
    lVar11 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07779820) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0623fe4c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_0623fe4c:
    uVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
    plVar9 = (long *)(**(code **)(*param_1 + 0x4d8))
                               (param_1,uVar8,*(undefined8 *)(*param_1 + 0x4e0));
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0623fec4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
LAB_0623fec4:
      lVar11 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      if (param_3 != (long *)0x0) {
        lVar12 = *param_3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0623ff24;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar2,0);
LAB_0623ff24:
        uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
        plVar9 = (long *)(**(code **)(*param_1 + 0x4d8))
                                   (param_1,uVar8,*(undefined8 *)(*param_1 + 0x4e0));
        if (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto SUB_055ea870;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
SUB_055ea870:
          lVar12 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if (lVar11 == lVar12) {
            uVar10 = 1;
          }
          else {
            uVar10 = 0;
            if ((lVar11 != 0) && (lVar12 != 0)) {
              if (*(int *)(lVar11 + 0x10) == *(int *)(lVar12 + 0x10)) {
                lVar1 = lVar11 + 0x14;
                lVar12 = lVar12 + 0x14;
                lVar11 = (long)*(int *)(lVar11 + 0x10) << 1;
                if (lVar1 != lVar12) {
                  lVar4 = func_0x057e39f8(0,0,lVar11,0);
                  uVar8 = func_0x057e3a04(lVar11,0);
                  uVar13 = func_0x057e3a10(uVar8,0);
                  if (7 < uVar13) {
                    lVar11 = func_0x057e3a24(uVar8,8,0);
                    while( true ) {
                      uVar13 = func_0x057e3a10(lVar11,0);
                      uVar5 = func_0x057e3a10(lVar4,0);
                      if (uVar13 <= uVar5) {
                        return (ulong)(*(long *)(lVar1 + lVar11) == *(long *)(lVar12 + lVar11));
                      }
                      uVar13 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar4),
                                               *(undefined8 *)(lVar12 + lVar4),0);
                      if ((uVar13 & 1) != 0) break;
                      lVar4 = func_0x057e3a1c(lVar4,8,0);
                    }
                    return 0;
                  }
                  uVar13 = func_0x057e3a10(uVar8,0);
                  uVar5 = func_0x057e3a10(lVar4,0);
                  if (uVar5 < uVar13) {
                    do {
                      bVar3 = *(char *)(lVar1 + lVar4) == *(char *)(lVar12 + lVar4);
                      uVar13 = (ulong)bVar3;
                      if (!bVar3) {
                        return uVar13;
                      }
                      lVar4 = func_0x057e3a1c(lVar4,1,0);
                      uVar5 = func_0x057e3a10(uVar8,0);
                      uVar6 = func_0x057e3a10(lVar4,0);
                    } while (uVar6 < uVar5);
                    return uVar13;
                  }
                }
                return 1;
              }
              uVar10 = 0;
            }
          }
          return (ulong)uVar10;
        }
      }
    }
  }
  func_0x03280cac();
  puVar2 = PTR_DAT_077db3c0;
  if ((bRam0000000007e245c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db210);
    func_0x03280a18(PTR_DAT_077cf458);
    func_0x03280a18(PTR_DAT_07780030);
    func_0x03280a18(PTR_DAT_077db3d0);
    func_0x03280a18(PTR_DAT_07780018);
    func_0x03280a18(PTR_DAT_077db3d8);
    func_0x03280a18(PTR_DAT_07780010);
    func_0x03280a18(PTR_DAT_077daaa8);
    func_0x03280a18(PTR_DAT_077db3e0);
    func_0x03280a18(PTR_DAT_077db3e8);
    func_0x03280a18(PTR_DAT_077db3f0);
    func_0x03280a18(PTR_DAT_077db3f8);
    func_0x03280a18(PTR_DAT_077db1d0);
    func_0x03280a18(PTR_DAT_077db400);
    func_0x03280a18(PTR_DAT_077db1c8);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_077db408);
    func_0x03280a18(PTR_DAT_077db410);
    func_0x03280a18(PTR_DAT_077db418);
    func_0x03280a18(PTR_DAT_077db3c8);
    func_0x03280a18(PTR_DAT_077db340);
    func_0x03280a18(PTR_DAT_077db420);
    func_0x03280a18(PTR_DAT_077db428);
    func_0x03280a18(PTR_DAT_077db430);
    func_0x03280a18(PTR_DAT_077db3c0);
    func_0x03280a18(PTR_DAT_077db2b0);
    bRam0000000007e245c1 = 1;
  }
  uVar13 = func_0x03280ca0(*(undefined8 *)puVar2);
  return uVar13;
}

