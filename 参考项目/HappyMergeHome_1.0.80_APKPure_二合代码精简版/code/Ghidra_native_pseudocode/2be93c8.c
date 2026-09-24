
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bf93c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iStack_2c;
  
  pcVar10 = (char *)(_UNK_02bf9b04 + 0x2bf93e8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b08 + 0x2bf9400));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b0c + 0x2bf940c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b10 + 0x2bf9418));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b14 + 0x2bf9424));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b18 + 0x2bf9430));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b1c + 0x2bf943c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b20 + 0x2bf9448));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b24 + 0x2bf9454));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b28 + 0x2bf9460));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b2c + 0x2bf946c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b30 + 0x2bf9478));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b34 + 0x2bf9484));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b38 + 0x2bf9490));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b3c + 0x2bf949c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9b40 + 0x2bf94a8));
    *pcVar10 = '\x01';
  }
  iVar11 = 0;
  iVar2 = func_0x02953fd4(0x5e9b,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x10) != -1) {
      if (*(int *)(**(int **)(_UNK_02bf9b44 + 0x2bf9520) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar11 = 0;
      iVar2 = func_0x02c35d10(2,0);
      if (iVar2 != 0) {
        if (*(int *)(**(int **)(_UNK_02bf9b48 + 0x2bf9554) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9b4c + 0x2bf9570));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar11 = 0;
        iVar2 = func_0x029a6fa8(iVar2,param_3,0);
        if (iVar2 != 0) {
          if (*(int *)(**(int **)(_UNK_02bf9b50 + 0x2bf95b0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar11 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9b54 + 0x2bf95cc));
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          piVar13 = *(int **)(_UNK_02bf9b58 + 0x2bf95ec);
          cVar1 = *(char *)(iVar11 + 0x1c);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar16 = *(undefined4 **)(_UNK_02bf9b5c + 0x2bf960c);
          iVar11 = func_0x014e9518(*puVar16);
          if (cVar1 == '\0') {
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = FUN_02bad670(iVar11,param_4,0);
            if (iVar11 == 0) {
              return 0;
            }
            if (*(int *)(*piVar13 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x014e9518(*puVar16);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = FUN_02bae194(iVar11,param_3,0);
            if (iVar11 == 0) {
              return 0;
            }
            if (*(int *)(*piVar13 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x014e9518(*puVar16);
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iStack_2c = FUN_02bdd790(iVar11,param_2,uVar14,0,0);
            piVar13 = *(int **)(_UNK_02bf9b60 + 0x2bf9aa4);
            if (iStack_2c == -1) {
              return 0;
            }
            if (*(int *)(*piVar13 + 0x74) == 0) {
              func_0x014387a4();
            }
            uVar17 = func_0x014e9518(*puVar16);
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            if ((int)uVar17 == 0) {
              func_0x014388e4(0,(int)((ulonglong)uVar17 >> 0x20),uVar14);
            }
            iVar11 = FUN_02be3a48((int)uVar17,2,uVar14,0);
            if (2 < iVar11) {
              return 0;
            }
          }
          else {
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iStack_2c = FUN_02bdd790(iVar11,param_2,uVar14,0,0);
            puVar16 = *(undefined4 **)(_UNK_02bf9b64 + 0x2bf9664);
            if (iStack_2c == -1) {
              return 0;
            }
          }
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar11 = func_0x014e9518(*puVar16);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02bad484(iVar11,param_3,0);
          if (*(int *)(**(int **)(_UNK_02bf9b68 + 0x2bf96b0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar11 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9b6c + 0x2bf96cc));
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          cVar1 = *(char *)(iVar11 + 0x1c);
          if (cVar1 == '\0') {
            cVar1 = '\x01';
          }
          else {
            iVar3 = 1;
          }
          if (iVar3 == 1) {
            iVar11 = 0;
          }
          if (iVar3 != 1 || cVar1 != '\0') {
            FUN_02bf5f2c(param_1,param_2,iStack_2c,param_3,0,0xc,2,0,0);
            if (*(int *)(*piVar13 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x014e9518(*puVar16);
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            FUN_02bad590(iVar11,iVar3,iStack_2c,uVar14,param_3,0);
            iVar11 = func_0x014e9518(*puVar16);
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            FUN_02be2ab4(iVar11,param_4,uVar14,0);
            if (*(int *)(**(int **)(_UNK_02bf9b70 + 0x2bf97bc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9b74 + 0x2bf97d8));
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x029a6fa8(iVar11,param_3,0);
            puVar7 = *(undefined4 **)(_UNK_02bf9b80 + 0x2bf9820);
            if (iVar3 == 1) {
              puVar7 = *(undefined4 **)(_UNK_02bf9b7c + 0x2bf9818);
            }
            uVar14 = *puVar7;
            if (*(int *)(**(int **)(_UNK_02bf9b78 + 0x2bf9810) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x0202346c(0);
            iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02bf9b84 + 0x2bf9850));
            func_0x02025440(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            *(undefined4 *)(iVar5 + 8) = 5;
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            uVar12 = *(undefined4 *)(iVar11 + 8);
            uVar6 = **(undefined4 **)(_UNK_02bf9b88 + 0x2bf9890);
            uVar8 = *(undefined4 *)(iVar2 + 8);
            uVar9 = *(undefined4 *)(iVar2 + 0x2c);
            uVar15 = *(undefined4 *)(iVar11 + 0x2c);
            *(undefined1 *)(iVar5 + 0x25) = 1;
            *(undefined4 *)(iVar5 + 0xc) = uVar12;
            *(undefined4 *)(iVar5 + 0x10) = uVar15;
            *(undefined4 *)(iVar5 + 0x14) = uVar8;
            *(undefined4 *)(iVar5 + 0x18) = uVar9;
            iVar11 = func_0x014388d4(uVar6);
            func_0x04752f54(iVar11,**(undefined4 **)(_UNK_02bf9b8c + 0x2bf98cc));
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            func_0x04753a34(iVar11,**(undefined4 **)(_UNK_02bf9b94 + 0x2bf98fc),uVar14,
                            **(undefined4 **)(_UNK_02bf9b90 + 0x2bf98f0));
            *(int *)(iVar5 + 0x2c) = iVar11;
            func_0x014385cc((int *)(iVar5 + 0x2c),iVar11);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02024d08(iVar4,iVar5,1,0);
            if (*(int *)(**(int **)(_UNK_02bf9b98 + 0x2bf9940) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar11 = func_0x014e9518(*puVar16);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            FUN_02bade6c(iVar11,param_3,0);
            iVar11 = 1;
            if (iVar3 == 1) {
              if (*(int *)(**(int **)(_UNK_02bf9b9c + 0x2bf9990) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9ba0 + 0x2bf99ac));
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              func_0x02cf767c(iVar2,iStack_2c,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar11 = func_0x029540a4(0x5e9b,0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = func_0x028fc658(iVar11,param_1,param_2,param_3,param_4,0);
  }
  return iVar11;
}

