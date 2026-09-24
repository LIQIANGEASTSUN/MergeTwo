
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c300c8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02c30c8c + 0x2c300e8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c30c90 + 0x2c300fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c30c94 + 0x2c30108));
    func_0x01438628(*(undefined4 *)(_UNK_02c30c98 + 0x2c30114));
    func_0x01438628(*(undefined4 *)(_UNK_02c30c9c + 0x2c30120));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ca0 + 0x2c3012c));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ca4 + 0x2c30138));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ca8 + 0x2c30144));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cac + 0x2c30150));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cb0 + 0x2c3015c));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cb4 + 0x2c30168));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cb8 + 0x2c30174));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cbc + 0x2c30180));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cc0 + 0x2c3018c));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cc4 + 0x2c30198));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cc8 + 0x2c301a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ccc + 0x2c301b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cd0 + 0x2c301bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cd4 + 0x2c301c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cd8 + 0x2c301d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cdc + 0x2c301e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ce0 + 0x2c301ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ce4 + 0x2c301f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c30ce8 + 0x2c30204));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cec + 0x2c30210));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cf0 + 0x2c3021c));
    func_0x01438628(*(undefined4 *)(_UNK_02c30cf4 + 0x2c30228));
    *pcVar9 = '\x01';
  }
  uStack_28 = 0;
  iVar2 = func_0x02953fd4(0x5e85,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c30cf8 + 0x2c30294));
    func_0x02c479d0(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    piVar15 = (int *)(iVar2 + 0xc);
    *piVar15 = param_2;
    func_0x014385cc(piVar15,param_2);
    if (*piVar15 != 0) {
      iVar3 = func_0x030b119c(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x030b1260(iVar3,0);
      if (iVar3 != 0) {
        func_0x02c30ddc(param_1);
        if (*(int *)(**(int **)(_UNK_02c30cfc + 0x2c30310) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c30d00 + 0x2c3032c));
        uVar4 = FUN_02c0c0ac(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        FUN_02bda8ac(iVar3,param_3,uVar4,**(undefined4 **)(_UNK_02c30d04 + 0x2c30360),1,0);
        iVar10 = *piVar15;
        iVar3 = **(int **)(**(int **)(_UNK_02c30d08 + 0x2c30384) + 0x5c);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar4,0);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_02c30d0c + 0x2c303d0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02c30d10 + 0x2c303f8));
          func_0x02025440(iVar10,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar12 = *piVar15;
          *(undefined4 *)(iVar10 + 8) = 0x3a;
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          uVar4 = *(undefined4 *)(iVar12 + 8);
          *(undefined1 *)(iVar10 + 0x25) = 1;
          *(undefined4 *)(iVar10 + 0xc) = uVar4;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar10,1,0);
        }
        if (*(int *)(**(int **)(_UNK_02c30d14 + 0x2c30468) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c30d18 + 0x2c30484));
        piVar11 = *(int **)(_UNK_02c30d1c + 0x2c30498);
        iVar10 = *piVar11;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar11;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x14);
        piVar11 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c30d20 + 0x2c304bc),2);
        pcVar9 = (char *)(_UNK_02c30d24 + 0x2c304d8);
        if (*pcVar9 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c30d28 + 0x2c304ec));
          *pcVar9 = '\x01';
        }
        puVar7 = *(undefined4 **)(**(int **)(_UNK_02c30d2c + 0x2c30500) + 0x5c);
        uStack_38 = *puVar7;
        uStack_34 = puVar7[1];
        iVar10 = func_0x014387ac(**(int **)(_UNK_02c30d2c + 0x2c30500),&uStack_38);
        if (piVar11 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar10 != 0) &&
           (iVar12 = func_0x014387a8(iVar10,*(undefined4 *)(*piVar11 + 0x20)), iVar12 == 0)) {
          uVar5 = func_0x01438904();
          func_0x01438790(uVar5,0);
        }
        if (piVar11[3] == 0) {
          func_0x014388e8();
        }
        piVar11[4] = iVar10;
        func_0x014385cc(piVar11 + 4,iVar10);
        uStack_2c = FUN_02c0c0ac(param_1);
        iVar10 = func_0x014387ac(**(undefined4 **)(_UNK_02c30d30 + 0x2c3058c),&uStack_2c);
        if ((iVar10 != 0) &&
           (iVar12 = func_0x014387a8(iVar10,*(undefined4 *)(*piVar11 + 0x20)), iVar12 == 0)) {
          uVar5 = func_0x01438904();
          func_0x01438790(uVar5,0);
        }
        if ((uint)piVar11[3] < 2) {
          func_0x014388e8();
        }
        piVar11[5] = iVar10;
        func_0x014385cc(piVar11 + 5,iVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02990414(iVar3,uVar4,piVar11,0);
        if (*(int *)(**(int **)(_UNK_02c30d34 + 0x2c30618) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c30d38 + 0x2c30634));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0299ab14(iVar3,0);
        iVar3 = func_0x030b119c(0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = func_0x030bdb6c(iVar3,0);
        *(undefined4 *)(iVar2 + 0x10) = uVar4;
        iVar3 = func_0x030b119c(0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x030b18a8(iVar3,0xffffffff,0);
        iVar10 = func_0x030b119c(0);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x030be190(iVar10,0);
        iVar12 = func_0x030b119c(0);
        iVar13 = *piVar15;
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar13 + 0xbc);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        func_0x030bd5dc(iVar12,uVar4,0);
        piVar11 = *(int **)(_UNK_02c30d3c + 0x2c30730);
        if (iVar3 != 0 && iVar10 == 0) {
          iVar10 = func_0x030b119c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x030bdae8(iVar10,0);
          if (*(int *)(iVar3 + 0xc) <= iVar10) {
            iVar10 = 0;
            puVar7 = *(undefined4 **)(_UNK_02c30d40 + 0x2c30a30);
            while( true ) {
              iVar12 = *(int *)(iVar3 + 0x10);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar12 + 0xc) <= iVar10) break;
              iVar12 = *(int *)(iVar3 + 0x10);
              iVar13 = **(int **)(*piVar11 + 0x5c);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              uVar4 = func_0x024f0530(iVar12,iVar10,*puVar7);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              iVar12 = func_0x02e651cc(iVar13,uVar4,0);
              if (iVar12 == 0) {
                if (*(int *)(**(int **)(_UNK_02c30d44 + 0x2c30aa8) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar12 = func_0x0202346c(0);
                iVar13 = *(int *)(iVar3 + 0x10);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                uStack_28 = func_0x024f0530(iVar13,iVar10,*puVar7);
                uVar4 = func_0x01524ffc(&uStack_28,0);
                uStack_28 = *(undefined4 *)(iVar3 + 8);
                uVar5 = func_0x01524ffc(&uStack_28,0);
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                func_0x020257a4(iVar12,0x1ba,uVar4,uVar5,0,0,0);
                iVar12 = func_0x0202346c(0);
                iVar13 = func_0x014388d4(**(undefined4 **)(_UNK_02c30d48 + 0x2c30b6c));
                func_0x02025440(iVar13,0);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar3 + 0x10);
                *(undefined4 *)(iVar13 + 8) = 0x39;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar8,iVar10,*puVar7);
                *(undefined1 *)(iVar13 + 0x25) = 1;
                *(undefined4 *)(iVar13 + 0xc) = uVar4;
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                func_0x02024d08(iVar12,iVar13,1,0);
                piVar11 = *(int **)(_UNK_02c30d4c + 0x2c30be8);
              }
              iVar12 = *(int *)(iVar3 + 0x10);
              iVar13 = **(int **)(*piVar11 + 0x5c);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              uVar4 = func_0x024f0530(iVar12,iVar10,*puVar7);
              iVar12 = *(int *)(iVar3 + 0x14);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              uVar5 = func_0x024f0530(iVar12,iVar10,*puVar7);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              func_0x02e64460(iVar13,uVar4,uVar5);
              iVar10 = iVar10 + 1;
            }
          }
        }
        if (*(int *)(**(int **)(_UNK_02c30d50 + 0x2c30774) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c30d54 + 0x2c30790));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03579aec(iVar3,**(undefined4 **)(_UNK_02c30d5c + 0x2c307c0),
                                **(undefined4 **)(_UNK_02c30d58 + 0x2c307b4));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        piVar11 = (int *)(iVar2 + 8);
        *piVar11 = iVar3;
        func_0x014385cc(piVar11,iVar3);
        iVar3 = *piVar11;
        if (*(int *)(**(int **)(_UNK_02c30d60 + 0x2c307f8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024ef144(iVar3,0,0);
        if (iVar3 == 0) {
          iVar2 = func_0x030b119c(0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x030b2cb0(iVar2,0);
          iVar2 = func_0x030b119c(0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x030b2af0(iVar2,0);
          if (iVar2 != 0) {
            iVar2 = func_0x030b119c(0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x030b2f1c(iVar2,1,0);
          }
        }
        else {
          iVar3 = *piVar11;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024eecb8(iVar3,0);
          *(undefined4 *)(iVar2 + 0x14) = uVar4;
          func_0x014385cc();
          iVar3 = func_0x030b119c(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x030bdae8(iVar3,0);
          *(undefined4 *)(iVar2 + 0x18) = uVar4;
          iVar3 = func_0x030b119c(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x030bdb6c(iVar3,0);
          iVar3 = *(int *)(**(int **)(_UNK_02c30d64 + 0x2c308b0) + 0x74);
          *(undefined4 *)(iVar2 + 0x1c) = uVar4;
          if (iVar3 == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c30d68 + 0x2c308d0));
          iVar10 = *piVar15;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = *(undefined4 *)(iVar10 + 8);
          iVar10 = func_0x024eecb8(param_1,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x024ef228(&uStack_38,iVar10,0);
          uVar1 = uStack_34;
          uVar5 = uStack_38;
          uVar14 = *(undefined4 *)(iVar2 + 0x14);
          uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02c30d6c + 0x2c30930));
          func_0x0152e3ec(uVar6,iVar2,**(undefined4 **)(_UNK_02c30d70 + 0x2c30954),0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02b7dbf0(iVar3,param_3,uVar4,uVar5,uVar1,uStack_30,uVar14,0x3f4ccccd,uVar6,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5e85,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028834e8(iVar2,param_1,param_2,param_3,0);
  }
  return;
}

