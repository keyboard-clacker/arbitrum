/* Autogenerated file. Do not edit manually. */
/* tslint:disable */
/* eslint-disable */

import { Contract, Signer } from 'ethers'
import { Provider } from '@ethersproject/providers'

import type { IArbCustomToken } from '../IArbCustomToken'

export class IArbCustomToken__factory {
  static connect(
    address: string,
    signerOrProvider: Signer | Provider
  ): IArbCustomToken {
    return new Contract(address, _abi, signerOrProvider) as IArbCustomToken
  }
}

const _abi = [
  {
    inputs: [
      {
        internalType: 'address',
        name: 'account',
        type: 'address',
      },
      {
        internalType: 'uint256',
        name: 'amount',
        type: 'uint256',
      },
    ],
    name: 'bridgeMint',
    outputs: [],
    stateMutability: 'nonpayable',
    type: 'function',
  },
]